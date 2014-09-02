/*
 * Copyright (C) 2009 Niek Linnenbank, 2014 @Mcscx (quitter.se/mcscx)
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <Macros.h>
#include "errno.h"

int errno USED = 0;

char * error_map[] USED =

    [-ESUCCESS]		= "Erfolg",
    [-E2BIG]		= "Argumentliste zu lang",
    [-EACCES]		= "Zugriff verweigert",
    [-EADDRINUSE]	= "Adresse ist in Benutzung",
    [-EADDRNOTAVAIL]	= "Adresse ist nicht verf�gbar",
    [-EAFNOSUPPORT]	= "Adressenfamilie wird nicht unterst�tzt",
    [-EAGAIN]		= "Ressource zur Zeit nicht verf�gbar",
    [-EALREADY]		= "Verbindung wird bereits aufgebaut",
    [-EBADF]		= "ung�ltiger Datei-Deskriptor",
    [-EBADMSG]		= "Meldung nicht in Ordnung",
    [-EBUSY]		= "Ger�t oder Ressource ist besch�ftigt",
    [-ECANCELED]	= "Vorgang abgebrochen",
    [-ECHILD]		= "Keine Kind-Prozesse",
    [-ECONNABORTED]	= "Verbindung abgebrochen",
    [-ECONNREFUSED]	= "Verbindung zur�ckgewiesen",
    [-ECONNRESET]	= "Verbindung zur�ckgesetzt",
    [-EDEADLK]		= "w�rde zu einem Resource-Deadlock f�hren",
    [-EDESTADDRREQ]	= "Zieladresse erforderlich",
    [-EDOM]		= "mathematisches Argument au�erhalb des Funktionsbereichs",
    [-EDQUOT]		= "reserviert",
    [-EEXIST]		= "Datei existiert bereits",
    [-EFAULT]		= "ung�ltige Adresse",
    [-EFBIG]		= "Datei zu gro�",
    [-EHOSTUNREACH]	= "Host ist nicht erreichbar",
    [-EIDRM]		= "Identifier entfernt",
    [-EILSEQ]		= "Illegale Bytefolge",
    [-EINPROGRESS]	= "Operation l�uft bereits",
    [-EINTR]		= "unterbrochene Funktion",
    [-EINVAL]		= "ung�ltiges Argument",
    [-EIO]		= "I/O-Fehler",
    [-EISCONN]		= "Socket ist verbunden",
    [-EISDIR]		= "ist ein Verzeichnis",
    [-ELOOP]		= "zu viele Stufen symbolischer Links",
    [-EMFILE]		= "Dateideskriptor-Wert zu gro�",
    [-EMLINK]		= "zu viele Links",
    [-EMSGSIZE]		= "Nachricht zu gro�",
    [-EMULTIHOP]	= "reserviert",
    [-ENAMETOOLONG]	= "Dateiname zu lang",
    [-ENETDOWN]		= "Netzwerk ist down",
    [-ENETRESET]	= "Verbindung vom Netzwerk abgebrochen",
    [-ENETUNREACH]	= "Netzwerk nicht erreichbar",
    [-ENFILE]		= "zu viele Dateien im System ge�ffnet",
    [-ENOBUFS]		= "kein Puffer verf�gbar",
    [-ENODATA]		= "Keine Nachricht verf�gbar auf der STREAM head read Warteschlange",
    [-ENODEV]		= "Kein solches Ger�t",
    [-ENOENT]		= "Kein solche Datei oder Verzeichnis",
    [-ENOEXEC]		= "Fehlerhaftes Format der ausf�hrbaren Datei",
    [-ENOLCK]		= "Keine Locks verf�gbar",
    [-ENOLINK]		= "Reserviert",
    [-ENOMEM]		= "Nicht genug Speicher verf�gbar",
    [-ENOMSG]		= "Keine Nachricht des gew�nschten Typs",
    [-ENOPROTOOPT]	= "Protokoll nicht verf�gbar",
    [-ENOSPC]		= "Kein freier Platz auf Ger�t",
    [-ENOSR]		= "Keine STREAM-Ressourcen",
    [-ENOSTR]		= "Ist kein STREAM",
    [-ENOSYS]		= "Funktion nicht unterst�tzt",
    [-ENOTCONN]		= "Der Socket ist nicht verbunden",
    [-ENOTDIR]		= "Ist kein Verzeichnis",
    [-ENOTEMPTY]	= "Verzeichnis ist nicht leer",
    [-ENOTRECOVERABLE]	= "Status nicht verf�gbar",
    [-ENOTSOCK]		= "Ist kein Socket",
    [-ENOTSUP]		= "Operation nicht unterst�tzt",
    [-ENOTTY]		= "Unpassende I/O-Steuerungs-Operation",
    [-ENXIO]		= "Kein solches Ger�t oder Adresse",
    [-EOPNOTSUPP]	= "Operation nicht unterst�tzt bei Socket",
    [-EOVERFLOW]	= "Wert zu gro� zur Speicherung in diesem Datentyp",
    [-EOWNERDEAD]	= "Vorheriger Eigent�mer ist tot",
    [-EPERM]		= "Operation nicht erlaubt",
    [-EPIPE]		= "Unterbrochene Pipe",
    [-EPROTO]		= "Protokoll-Fehler",
    [-EPROTONOSUPPORT]	= "Protokoll nicht unterst�tzt",
    [-EPROTOTYPE]	= "Protokoll falscher Typ f�r Socket",
    [-ERANGE]		= "Ergebnis zu gro�",
    [-EROFS]		= "Readonly-Dateisystem",
    [-ESPIPE]		= "Ung�ltiger Seek",
    [-ESRCH]		= "Kein solcher Prozess",
    [-ESTALE]		= "Reserviert",
    [-ETIME]		= "Stream ioctl() Zeit�berschreitung",
    [-ETIMEDOUT]	= "Verbindungs-Zeit�berschreitung",
    [-ETXTBSY]		= "Textdatei in Zugriff",
    [-EWOULDBLOCK]	= "Operation w�rde blockieren",
    [-EXDEV]		= "Cross-Device-Link"
};
