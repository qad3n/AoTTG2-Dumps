// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileSystemWatcher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000244")]
[DefaultEvent("Changed")]
[IODescription("")]
public class FileSystemWatcher : Component, ISupportInitialize
{
	[Token(Token = "0x2000245")]
	private enum EventType
	{
		[Token(Token = "0x4000828")]
		FileSystemEvent,
		[Token(Token = "0x4000829")]
		ErrorEvent,
		[Token(Token = "0x400082A")]
		RenameEvent
	}

	[Token(Token = "0x4000810")]
	[FieldOffset(Offset = "0x28")]
	private bool inited;

	[Token(Token = "0x4000811")]
	[FieldOffset(Offset = "0x29")]
	private bool start_requested;

	[Token(Token = "0x4000812")]
	[FieldOffset(Offset = "0x2A")]
	private bool enableRaisingEvents;

	[Token(Token = "0x4000813")]
	[FieldOffset(Offset = "0x30")]
	private string filter;

	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x38")]
	private bool includeSubdirectories;

	[Token(Token = "0x4000815")]
	[FieldOffset(Offset = "0x3C")]
	private int internalBufferSize;

	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x40")]
	private NotifyFilters notifyFilter;

	[Token(Token = "0x4000817")]
	[FieldOffset(Offset = "0x48")]
	private string path;

	[Token(Token = "0x4000818")]
	[FieldOffset(Offset = "0x50")]
	private string fullpath;

	[Token(Token = "0x4000819")]
	[FieldOffset(Offset = "0x58")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x400081A")]
	[FieldOffset(Offset = "0x60")]
	private WaitForChangedResult lastData;

	[Token(Token = "0x400081B")]
	[FieldOffset(Offset = "0x80")]
	private bool waiting;

	[Token(Token = "0x400081C")]
	[FieldOffset(Offset = "0x88")]
	private SearchPattern2 pattern;

	[Token(Token = "0x400081D")]
	[FieldOffset(Offset = "0x90")]
	private bool disposed;

	[Token(Token = "0x400081E")]
	[FieldOffset(Offset = "0x98")]
	private string mangledFilter;

	[Token(Token = "0x400081F")]
	[FieldOffset(Offset = "0xA0")]
	private IFileWatcher watcher;

	[Token(Token = "0x4000820")]
	[FieldOffset(Offset = "0xA8")]
	private object watcher_handle;

	[Token(Token = "0x4000821")]
	[FieldOffset(Offset = "0x0")]
	private static object lockobj;

	[Token(Token = "0x4000822")]
	[FieldOffset(Offset = "0xB0")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Changed;

	[Token(Token = "0x4000823")]
	[FieldOffset(Offset = "0xB8")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Created;

	[Token(Token = "0x4000824")]
	[FieldOffset(Offset = "0xC0")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Deleted;

	[Token(Token = "0x4000825")]
	[FieldOffset(Offset = "0xC8")]
	[CompilerGenerated]
	private ErrorEventHandler Error;

	[Token(Token = "0x4000826")]
	[FieldOffset(Offset = "0xD0")]
	[CompilerGenerated]
	private RenamedEventHandler m_Renamed;

	[Token(Token = "0x17000373")]
	internal bool Waiting
	{
		[Token(Token = "0x6000FEE")]
		[Address(RVA = "0x62898C0", Offset = "0x62888C0", VA = "0x62898C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FEF")]
		[Address(RVA = "0x62898D0", Offset = "0x62888D0", VA = "0x62898D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000374")]
	internal string MangledFilter
	{
		[Token(Token = "0x6000FF0")]
		[Address(RVA = "0x6286F60", Offset = "0x6285F60", VA = "0x6286F60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000375")]
	internal SearchPattern2 Pattern
	{
		[Token(Token = "0x6000FF1")]
		[Address(RVA = "0x6286E70", Offset = "0x6285E70", VA = "0x6286E70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000376")]
	internal string FullPath
	{
		[Token(Token = "0x6000FF2")]
		[Address(RVA = "0x6286DD0", Offset = "0x6285DD0", VA = "0x6286DD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000377")]
	[IODescription("Flag to indicate if this instance is active")]
	[DefaultValue(false)]
	public bool EnableRaisingEvents
	{
		[Token(Token = "0x6000FF3")]
		[Address(RVA = "0x6289920", Offset = "0x6288920", VA = "0x6289920")]
		set
		{
		}
	}

	[Token(Token = "0x17000378")]
	[DefaultValue(false)]
	[IODescription("Flag to indicate we want to watch subdirectories")]
	public bool IncludeSubdirectories
	{
		[Token(Token = "0x6000FF4")]
		[Address(RVA = "0x6289CF0", Offset = "0x6288CF0", VA = "0x6289CF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FF5")]
		[Address(RVA = "0x6289D00", Offset = "0x6288D00", VA = "0x6289D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000379")]
	[IODescription("Flag to indicate which change event we want to monitor")]
	[DefaultValue(NotifyFilters.DirectoryName | NotifyFilters.FileName | NotifyFilters.LastWrite)]
	public NotifyFilters NotifyFilter
	{
		[Token(Token = "0x6000FF6")]
		[Address(RVA = "0x6289E80", Offset = "0x6288E80", VA = "0x6289E80")]
		set
		{
		}
	}

	[Token(Token = "0x1700037A")]
	[Browsable(false)]
	public override ISite Site
	{
		[Token(Token = "0x6000FF7")]
		[Address(RVA = "0x628A000", Offset = "0x6289000", VA = "0x628A000", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FF8")]
		[Address(RVA = "0x628A010", Offset = "0x6289010", VA = "0x628A010", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x14000010")]
	[IODescription("Occurs when a file/directory change matches the filter")]
	public event FileSystemEventHandler Changed
	{
		[Token(Token = "0x6001005")]
		[Address(RVA = "0x628A8B0", Offset = "0x62898B0", VA = "0x628A8B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001006")]
		[Address(RVA = "0x628A950", Offset = "0x6289950", VA = "0x628A950")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	[IODescription("Occurs when a file/directory creation matches the filter")]
	public event FileSystemEventHandler Created
	{
		[Token(Token = "0x6001007")]
		[Address(RVA = "0x628A9F0", Offset = "0x62899F0", VA = "0x628A9F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001008")]
		[Address(RVA = "0x628AA90", Offset = "0x6289A90", VA = "0x628AA90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000012")]
	[IODescription("Occurs when a file/directory deletion matches the filter")]
	public event FileSystemEventHandler Deleted
	{
		[Token(Token = "0x6001009")]
		[Address(RVA = "0x628AB30", Offset = "0x6289B30", VA = "0x628AB30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600100A")]
		[Address(RVA = "0x628ABD0", Offset = "0x6289BD0", VA = "0x628ABD0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	[IODescription("Occurs when a file/directory rename matches the filter")]
	public event RenamedEventHandler Renamed
	{
		[Token(Token = "0x600100B")]
		[Address(RVA = "0x628AC70", Offset = "0x6289C70", VA = "0x628AC70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x628AD10", Offset = "0x6289D10", VA = "0x628AD10")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x6289370", Offset = "0x6288370", VA = "0x6289370")]
	public FileSystemWatcher()
	{
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x62895C0", Offset = "0x62885C0", VA = "0x62895C0")]
	public FileSystemWatcher(string path)
	{
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x6289610", Offset = "0x6288610", VA = "0x6289610")]
	public FileSystemWatcher(string path, string filter)
	{
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x6289420", Offset = "0x6288420", VA = "0x6289420")]
	private void InitWatcher()
	{
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x628A120", Offset = "0x6289120", VA = "0x628A120", Slot = "16")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x628A130", Offset = "0x6289130", VA = "0x628A130", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x628A370", Offset = "0x6289370", VA = "0x628A370", Slot = "1")]
	~FileSystemWatcher()
	{
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x628A410", Offset = "0x6289410", VA = "0x628A410", Slot = "17")]
	public void EndInit()
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x628A430", Offset = "0x6289430", VA = "0x628A430")]
	private void RaiseEvent(Delegate ev, EventArgs arg, EventType evtype)
	{
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x628A810", Offset = "0x6289810", VA = "0x628A810")]
	protected void OnChanged(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x628A830", Offset = "0x6289830", VA = "0x628A830")]
	protected void OnCreated(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x628A850", Offset = "0x6289850", VA = "0x628A850")]
	protected void OnDeleted(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x628A870", Offset = "0x6289870", VA = "0x628A870")]
	protected void OnRenamed(RenamedEventArgs e)
	{
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x6287FB0", Offset = "0x6286FB0", VA = "0x6287FB0")]
	internal void DispatchEvents(FileAction act, string filename, ref RenamedEventArgs renamed)
	{
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x6289B50", Offset = "0x6288B50", VA = "0x6289B50")]
	private void Start()
	{
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x6289C20", Offset = "0x6288C20", VA = "0x6289C20")]
	private void Stop()
	{
	}
}
