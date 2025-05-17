#include <gtk/gtk.h>

static void activate (GtkApplication *app, gpointer user_data) {
  GtkWidget *window;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Window");
  gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);
  gtk_window_present (GTK_WINDOW (window));
}

int main (int argc, char **argv) {
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}

/* TODO
 * I am going to follow the GTK documentation
 * and type in every single thing to build muscle memory
 * I want to know the syntax, I believe 
 * I learn better when I do not copy and paste from the
 * documentation
 *
 * I recommend you go check out the GTK Documentaion
 * it is simple and easy to read
 * this is going to be a very interesting project
 */
