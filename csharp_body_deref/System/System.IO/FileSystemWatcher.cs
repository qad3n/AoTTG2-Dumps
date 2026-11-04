// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystemWatcher
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000283")]
[DefaultEvent("Changed")]
[IODescription("")]
public class FileSystemWatcher : Component, ISupportInitialize
{
	[Token(Token = "0x2000284")]
	private enum EventType
	{
		[Token(Token = "0x40008F7")]
		FileSystemEvent,
		[Token(Token = "0x40008F8")]
		ErrorEvent,
		[Token(Token = "0x40008F9")]
		RenameEvent
	}

	[Token(Token = "0x40008DF")]
	[FieldOffset(Offset = "0x28")]
	private bool inited;

	[Token(Token = "0x40008E0")]
	[FieldOffset(Offset = "0x29")]
	private bool start_requested;

	[Token(Token = "0x40008E1")]
	[FieldOffset(Offset = "0x2A")]
	private bool enableRaisingEvents;

	[Token(Token = "0x40008E2")]
	[FieldOffset(Offset = "0x30")]
	private string filter;

	[Token(Token = "0x40008E3")]
	[FieldOffset(Offset = "0x38")]
	private bool includeSubdirectories;

	[Token(Token = "0x40008E4")]
	[FieldOffset(Offset = "0x3C")]
	private int internalBufferSize;

	[Token(Token = "0x40008E5")]
	[FieldOffset(Offset = "0x40")]
	private NotifyFilters notifyFilter;

	[Token(Token = "0x40008E6")]
	[FieldOffset(Offset = "0x48")]
	private string path;

	[Token(Token = "0x40008E7")]
	[FieldOffset(Offset = "0x50")]
	private string fullpath;

	[Token(Token = "0x40008E8")]
	[FieldOffset(Offset = "0x58")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x40008E9")]
	[FieldOffset(Offset = "0x60")]
	private WaitForChangedResult lastData;

	[Token(Token = "0x40008EA")]
	[FieldOffset(Offset = "0x80")]
	private bool waiting;

	[Token(Token = "0x40008EB")]
	[FieldOffset(Offset = "0x88")]
	private SearchPattern2 pattern;

	[Token(Token = "0x40008EC")]
	[FieldOffset(Offset = "0x90")]
	private bool disposed;

	[Token(Token = "0x40008ED")]
	[FieldOffset(Offset = "0x98")]
	private string mangledFilter;

	[Token(Token = "0x40008EE")]
	[FieldOffset(Offset = "0xA0")]
	private IFileWatcher watcher;

	[Token(Token = "0x40008EF")]
	[FieldOffset(Offset = "0xA8")]
	private object watcher_handle;

	[Token(Token = "0x40008F0")]
	[FieldOffset(Offset = "0x0")]
	private static object lockobj;

	[Token(Token = "0x40008F1")]
	[FieldOffset(Offset = "0xB0")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Changed;

	[Token(Token = "0x40008F2")]
	[FieldOffset(Offset = "0xB8")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Created;

	[Token(Token = "0x40008F3")]
	[FieldOffset(Offset = "0xC0")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Deleted;

	[Token(Token = "0x40008F4")]
	[FieldOffset(Offset = "0xC8")]
	[CompilerGenerated]
	private ErrorEventHandler Error;

	[Token(Token = "0x40008F5")]
	[FieldOffset(Offset = "0xD0")]
	[CompilerGenerated]
	private RenamedEventHandler m_Renamed;

	[Token(Token = "0x170003A2")]
	internal bool Waiting
	{
		[Token(Token = "0x60011AE")]
		[Address(RVA = "0x1720FF0", Offset = "0x171F5F0", VA = "0x181720FF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011AF")]
		[Address(RVA = "0x1721000", Offset = "0x171F600", VA = "0x181721000")]
		set
		{
		}
	}

	[Token(Token = "0x170003A3")]
	internal string MangledFilter
	{
		[Token(Token = "0x60011B0")]
		[Address(RVA = "0x28F1DC0", Offset = "0x28F03C0", VA = "0x1828F1DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A4")]
	internal SearchPattern2 Pattern
	{
		[Token(Token = "0x60011B1")]
		[Address(RVA = "0x28F1E30", Offset = "0x28F0430", VA = "0x1828F1E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A5")]
	internal string FullPath
	{
		[Token(Token = "0x60011B2")]
		[Address(RVA = "0x28F1D00", Offset = "0x28F0300", VA = "0x1828F1D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003A6")]
	[DefaultValue(false)]
	[IODescription("Flag to indicate if this instance is active")]
	public bool EnableRaisingEvents
	{
		[Token(Token = "0x60011B3")]
		[Address(RVA = "0x28F21B0", Offset = "0x28F07B0", VA = "0x1828F21B0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A7")]
	[DefaultValue(false)]
	[IODescription("Flag to indicate we want to watch subdirectories")]
	public bool IncludeSubdirectories
	{
		[Token(Token = "0x60011B4")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011B5")]
		[Address(RVA = "0x28F2260", Offset = "0x28F0860", VA = "0x1828F2260")]
		set
		{
		}
	}

	[Token(Token = "0x170003A8")]
	[IODescription("Flag to indicate which change event we want to monitor")]
	[DefaultValue(NotifyFilters.DirectoryName | NotifyFilters.FileName | NotifyFilters.LastWrite)]
	public NotifyFilters NotifyFilter
	{
		[Token(Token = "0x60011B6")]
		[Address(RVA = "0x28F22A0", Offset = "0x28F08A0", VA = "0x1828F22A0")]
		set
		{
		}
	}

	[Token(Token = "0x170003A9")]
	[Browsable(false)]
	public override ISite Site
	{
		[Token(Token = "0x60011B7")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x60011B8")]
		[Address(RVA = "0x28F22E0", Offset = "0x28F08E0", VA = "0x1828F22E0", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x14000010")]
	[IODescription("Occurs when a file/directory change matches the filter")]
	public event FileSystemEventHandler Changed
	{
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x28F1A80", Offset = "0x28F0080", VA = "0x1828F1A80")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60011C6")]
		[Address(RVA = "0x28F1F30", Offset = "0x28F0530", VA = "0x1828F1F30")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	[IODescription("Occurs when a file/directory creation matches the filter")]
	public event FileSystemEventHandler Created
	{
		[Token(Token = "0x60011C7")]
		[Address(RVA = "0x28F1B20", Offset = "0x28F0120", VA = "0x1828F1B20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60011C8")]
		[Address(RVA = "0x28F1FD0", Offset = "0x28F05D0", VA = "0x1828F1FD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000012")]
	[IODescription("Occurs when a file/directory deletion matches the filter")]
	public event FileSystemEventHandler Deleted
	{
		[Token(Token = "0x60011C9")]
		[Address(RVA = "0x28F1BC0", Offset = "0x28F01C0", VA = "0x1828F1BC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x28F2070", Offset = "0x28F0670", VA = "0x1828F2070")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	[IODescription("Occurs when a file/directory rename matches the filter")]
	public event RenamedEventHandler Renamed
	{
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x28F1C60", Offset = "0x28F0260", VA = "0x1828F1C60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x28F2110", Offset = "0x28F0710", VA = "0x1828F2110")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x28F19C0", Offset = "0x28EFFC0", VA = "0x1828F19C0")]
	public FileSystemWatcher()
	{
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x28F16D0", Offset = "0x28EFCD0", VA = "0x1828F16D0")]
	public FileSystemWatcher(string path)
	{
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x28F1720", Offset = "0x28EFD20", VA = "0x1828F1720")]
	public FileSystemWatcher(string path, string filter)
	{
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x28F0EA0", Offset = "0x28EF4A0", VA = "0x1828F0EA0")]
	private void InitWatcher()
	{
	}

	[Token(Token = "0x60011B9")]
	[Address(RVA = "0x1975C00", Offset = "0x1974200", VA = "0x181975C00", Slot = "16")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x60011BA")]
	[Address(RVA = "0x28F0C50", Offset = "0x28EF250", VA = "0x1828F0C50", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011BB")]
	[Address(RVA = "0x28F0E20", Offset = "0x28EF420", VA = "0x1828F0E20", Slot = "1")]
	~FileSystemWatcher()
	{
	}

	[Token(Token = "0x60011BC")]
	[Address(RVA = "0x28F0D70", Offset = "0x28EF370", VA = "0x1828F0D70", Slot = "17")]
	public void EndInit()
	{
	}

	[Token(Token = "0x60011BD")]
	[Address(RVA = "0x28F1190", Offset = "0x28EF790", VA = "0x1828F1190")]
	private void RaiseEvent(Delegate ev, EventArgs arg, EventType evtype)
	{
	}

	[Token(Token = "0x60011BE")]
	[Address(RVA = "0x28F10D0", Offset = "0x28EF6D0", VA = "0x1828F10D0")]
	protected void OnChanged(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60011BF")]
	[Address(RVA = "0x28F1100", Offset = "0x28EF700", VA = "0x1828F1100")]
	protected void OnCreated(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60011C0")]
	[Address(RVA = "0x28F1130", Offset = "0x28EF730", VA = "0x1828F1130")]
	protected void OnDeleted(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60011C1")]
	[Address(RVA = "0x28F1160", Offset = "0x28EF760", VA = "0x1828F1160")]
	protected void OnRenamed(RenamedEventArgs e)
	{
	}

	[Token(Token = "0x60011C2")]
	[Address(RVA = "0x28F07C0", Offset = "0x28EEDC0", VA = "0x1828F07C0")]
	internal void DispatchEvents(FileAction act, string filename, ref RenamedEventArgs renamed)
	{
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x28F1570", Offset = "0x28EFB70", VA = "0x1828F1570")]
	private void Start()
	{
	}

	[Token(Token = "0x60011C4")]
	[Address(RVA = "0x28F15E0", Offset = "0x28EFBE0", VA = "0x1828F15E0")]
	private void Stop()
	{
	}
}
