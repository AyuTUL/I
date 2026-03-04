#include <gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

struct subject {
    char subName[MAX];
    float marks;
};

struct marks {
    float total, percent;
    char gr[5];
};

struct student {
    int sem;
    char name[MAX], addr[MAX], regNum[MAX], faculty[MAX];
    struct subject sub[5];
    struct marks m;
};

GtkWidget *window;

// Function prototypes
void create(GtkWidget *widget, gpointer data);
void view(GtkWidget *widget, gpointer data);
void update(GtkWidget *widget, gpointer data);
void del(GtkWidget *widget, gpointer data);

int main(int argc, char *argv[]) {
    GtkWidget *button_box, *add_button, *view_button, *update_button, *delete_button;

    gtk_init(&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    button_box = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_container_add(GTK_CONTAINER(window), button_box);

    add_button = gtk_button_new_with_label("Add Student Record");
    g_signal_connect(add_button, "clicked", G_CALLBACK(create), NULL);
    gtk_container_add(GTK_CONTAINER(button_box), add_button);

    view_button = gtk_button_new_with_label("View Student Record");
    g_signal_connect(view_button, "clicked", G_CALLBACK(view), NULL);
    gtk_container_add(GTK_CONTAINER(button_box), view_button);

    update_button = gtk_button_new_with_label("Update Student Record");
    g_signal_connect(update_button, "clicked", G_CALLBACK(update), NULL);
    gtk_container_add(GTK_CONTAINER(button_box), update_button);

    delete_button = gtk_button_new_with_label("Delete Student Record");
    g_signal_connect(delete_button, "clicked", G_CALLBACK(del), NULL);
    gtk_container_add(GTK_CONTAINER(button_box), delete_button);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}

void create(GtkWidget *widget, gpointer data) {
    GtkWidget *dialog, *label_name, *entry_name, *label_addr, *entry_addr, *label_reg, *entry_reg, *label_fac, *entry_fac, *content_area;
    struct student s;

    dialog = gtk_dialog_new_with_buttons("Add Student Record", GTK_WINDOW(window), GTK_DIALOG_MODAL,
                                         "Cancel", GTK_RESPONSE_CANCEL, "Add", GTK_RESPONSE_ACCEPT, NULL);

    content_area = gtk_dialog_get_content_area(GTK_DIALOG(dialog));

    label_name = gtk_label_new("Name: ");
    gtk_container_add(GTK_CONTAINER(content_area), label_name);
    entry_name = gtk_entry_new();
    gtk_container_add(GTK_CONTAINER(content_area), entry_name);

    label_addr = gtk_label_new("Address: ");
    gtk_container_add(GTK_CONTAINER(content_area), label_addr);
    entry_addr = gtk_entry_new();
    gtk_container_add(GTK_CONTAINER(content_area), entry_addr);

    label_reg = gtk_label_new("Registration No.: ");
    gtk_container_add(GTK_CONTAINER(content_area), label_reg);
    entry_reg = gtk_entry_new();
    gtk_container_add(GTK_CONTAINER(content_area), entry_reg);

    label_fac = gtk_label_new("Faculty: ");
    gtk_container_add(GTK_CONTAINER(content_area), label_fac);
    entry_fac = gtk_entry_new();
    gtk_container_add(GTK_CONTAINER(content_area), entry_fac);

    gtk_widget_show_all(dialog);

    gint response = gtk_dialog_run(GTK_DIALOG(dialog));
    if (response == GTK_RESPONSE_ACCEPT) {
        const gchar *name = gtk_entry_get_text(GTK_ENTRY(entry_name));
        const gchar *addr = gtk_entry_get_text(GTK_ENTRY(entry_addr));
        const gchar *reg = gtk_entry_get_text(GTK_ENTRY(entry_reg));
        const gchar *fac = gtk_entry_get_text(GTK_ENTRY(entry_fac));

        strcpy(s.name, name);
        strcpy(s.addr, addr);
        strcpy(s.regNum, reg);
        strcpy(s.faculty, fac);

        // Write the student record to a file or database
        FILE *fp = fopen("record.txt", "a");
        if (fp != NULL) {
            fprintf(fp, "Name: %s | Address: %s | Registration No.: %s | Faculty: %s\n", s.name, s.addr, s.regNum, s.faculty);
            fclose(fp);
            printf("Student record added successfully.\n");
        } else {
            printf("Error opening file for writing.\n");
        }
    }

    gtk_widget_destroy(dialog);
}

void view(GtkWidget *widget, gpointer data) {
    // Implement viewing of student records
}

void update(GtkWidget *widget, gpointer data) {
    // Implement updating of student records
}

void del(GtkWidget *widget, gpointer data) {
    // Implement deleting of student records
}
