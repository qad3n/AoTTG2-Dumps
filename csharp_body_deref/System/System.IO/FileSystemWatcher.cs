using System.ComponentModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000362")]
[DefaultEvent("Changed")]
[IODescription("")]
public class FileSystemWatcher : Component, ISupportInitialize
{
	[Token(Token = "0x2000363")]
	private enum EventType
	{
		[Token(Token = "0x4000F7F")]
		FileSystemEvent,
		[Token(Token = "0x4000F80")]
		ErrorEvent,
		[Token(Token = "0x4000F81")]
		RenameEvent
	}

	[Token(Token = "0x4000F67")]
	[FieldOffset(Offset = "0x28")]
	private bool inited;

	[Token(Token = "0x4000F68")]
	[FieldOffset(Offset = "0x29")]
	private bool start_requested;

	[Token(Token = "0x4000F69")]
	[FieldOffset(Offset = "0x2A")]
	private bool enableRaisingEvents;

	[Token(Token = "0x4000F6A")]
	[FieldOffset(Offset = "0x30")]
	private string filter;

	[Token(Token = "0x4000F6B")]
	[FieldOffset(Offset = "0x38")]
	private bool includeSubdirectories;

	[Token(Token = "0x4000F6C")]
	[FieldOffset(Offset = "0x3C")]
	private int internalBufferSize;

	[Token(Token = "0x4000F6D")]
	[FieldOffset(Offset = "0x40")]
	private NotifyFilters notifyFilter;

	[Token(Token = "0x4000F6E")]
	[FieldOffset(Offset = "0x48")]
	private string path;

	[Token(Token = "0x4000F6F")]
	[FieldOffset(Offset = "0x50")]
	private string fullpath;

	[Token(Token = "0x4000F70")]
	[FieldOffset(Offset = "0x58")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x60")]
	private WaitForChangedResult lastData;

	[Token(Token = "0x4000F72")]
	[FieldOffset(Offset = "0x80")]
	private bool waiting;

	[Token(Token = "0x4000F73")]
	[FieldOffset(Offset = "0x88")]
	private SearchPattern2 pattern;

	[Token(Token = "0x4000F74")]
	[FieldOffset(Offset = "0x90")]
	private bool disposed;

	[Token(Token = "0x4000F75")]
	[FieldOffset(Offset = "0x98")]
	private string mangledFilter;

	[Token(Token = "0x4000F76")]
	[FieldOffset(Offset = "0xA0")]
	private IFileWatcher watcher;

	[Token(Token = "0x4000F77")]
	[FieldOffset(Offset = "0xA8")]
	private object watcher_handle;

	[Token(Token = "0x4000F78")]
	[FieldOffset(Offset = "0x0")]
	private static object lockobj;

	[Token(Token = "0x4000F7C")]
	[FieldOffset(Offset = "0xC8")]
	[CompilerGenerated]
	private ErrorEventHandler Error;

	[Token(Token = "0x17000502")]
	internal bool Waiting
	{
		[Token(Token = "0x60016AB")]
		[Address(RVA = "0x45C84F0", Offset = "0x45C84F0", VA = "0x45C84F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016AC")]
		[Address(RVA = "0x45C8500", Offset = "0x45C8500", VA = "0x45C8500")]
		set
		{
		}
	}

	[Token(Token = "0x17000503")]
	internal string MangledFilter
	{
		[Token(Token = "0x60016AD")]
		[Address(RVA = "0x45C5940", Offset = "0x45C5940", VA = "0x45C5940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000504")]
	internal SearchPattern2 Pattern
	{
		[Token(Token = "0x60016AE")]
		[Address(RVA = "0x45C5850", Offset = "0x45C5850", VA = "0x45C5850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000505")]
	internal string FullPath
	{
		[Token(Token = "0x60016AF")]
		[Address(RVA = "0x45C57B0", Offset = "0x45C57B0", VA = "0x45C57B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000506")]
	[IODescription("Flag to indicate if this instance is active")]
	[DefaultValue(false)]
	public bool EnableRaisingEvents
	{
		[Token(Token = "0x60016B0")]
		[Address(RVA = "0x45C8550", Offset = "0x45C8550", VA = "0x45C8550")]
		set
		{
		}
	}

	[Token(Token = "0x17000507")]
	[IODescription("Flag to indicate we want to watch subdirectories")]
	[DefaultValue(false)]
	public bool IncludeSubdirectories
	{
		[Token(Token = "0x60016B1")]
		[Address(RVA = "0x45C8920", Offset = "0x45C8920", VA = "0x45C8920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60016B2")]
		[Address(RVA = "0x45C8930", Offset = "0x45C8930", VA = "0x45C8930")]
		set
		{
		}
	}

	[Token(Token = "0x17000508")]
	[DefaultValue(NotifyFilters.DirectoryName | NotifyFilters.FileName | NotifyFilters.LastWrite)]
	[IODescription("Flag to indicate which change event we want to monitor")]
	public NotifyFilters NotifyFilter
	{
		[Token(Token = "0x60016B3")]
		[Address(RVA = "0x45C8AC0", Offset = "0x45C8AC0", VA = "0x45C8AC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000509")]
	[Browsable(false)]
	public override ISite Site
	{
		[Token(Token = "0x60016B4")]
		[Address(RVA = "0x45C8C50", Offset = "0x45C8C50", VA = "0x45C8C50", Slot = "12")]
		get
		{
			return null;
		}
		[Token(Token = "0x60016B5")]
		[Address(RVA = "0x45C8C60", Offset = "0x45C8C60", VA = "0x45C8C60", Slot = "13")]
		set
		{
		}
	}

	[Token(Token = "0x14000010")]
	[IODescription("Occurs when a file/directory change matches the filter")]
	public event FileSystemEventHandler Changed
	{
		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x45C9480", Offset = "0x45C9480", VA = "0x45C9480")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60016C3")]
		[Address(RVA = "0x45C9520", Offset = "0x45C9520", VA = "0x45C9520")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000011")]
	[IODescription("Occurs when a file/directory creation matches the filter")]
	public event FileSystemEventHandler Created
	{
		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x45C95C0", Offset = "0x45C95C0", VA = "0x45C95C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x45C9660", Offset = "0x45C9660", VA = "0x45C9660")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000012")]
	[IODescription("Occurs when a file/directory deletion matches the filter")]
	public event FileSystemEventHandler Deleted
	{
		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x45C9700", Offset = "0x45C9700", VA = "0x45C9700")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60016C7")]
		[Address(RVA = "0x45C97A0", Offset = "0x45C97A0", VA = "0x45C97A0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000013")]
	[IODescription("Occurs when a file/directory rename matches the filter")]
	public event RenamedEventHandler Renamed
	{
		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x45C9840", Offset = "0x45C9840", VA = "0x45C9840")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60016C9")]
		[Address(RVA = "0x45C98E0", Offset = "0x45C98E0", VA = "0x45C98E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60016A8")]
	[Address(RVA = "0x45C8020", Offset = "0x45C8020", VA = "0x45C8020")]
	public FileSystemWatcher(string path)
	{
	}

	[Token(Token = "0x60016A9")]
	[Address(RVA = "0x45C8060", Offset = "0x45C8060", VA = "0x45C8060")]
	public FileSystemWatcher(string path, string filter)
	{
	}

	[Token(Token = "0x60016AA")]
	[Address(RVA = "0x45C8280", Offset = "0x45C8280", VA = "0x45C8280")]
	private void InitWatcher()
	{
	}

	[Token(Token = "0x60016B6")]
	[Address(RVA = "0x45C8D70", Offset = "0x45C8D70", VA = "0x45C8D70", Slot = "16")]
	public void BeginInit()
	{
	}

	[Token(Token = "0x60016B7")]
	[Address(RVA = "0x45C8D80", Offset = "0x45C8D80", VA = "0x45C8D80", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60016B8")]
	[Address(RVA = "0x45C8FE0", Offset = "0x45C8FE0", VA = "0x45C8FE0", Slot = "1")]
	~FileSystemWatcher()
	{
	}

	[Token(Token = "0x60016B9")]
	[Address(RVA = "0x45C9080", Offset = "0x45C9080", VA = "0x45C9080", Slot = "17")]
	public void EndInit()
	{
	}

	[Token(Token = "0x60016BA")]
	[Address(RVA = "0x45C90A0", Offset = "0x45C90A0", VA = "0x45C90A0")]
	private void RaiseEvent(Delegate ev, EventArgs arg, EventType evtype)
	{
	}

	[Token(Token = "0x60016BB")]
	[Address(RVA = "0x45C93E0", Offset = "0x45C93E0", VA = "0x45C93E0")]
	protected void OnChanged(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60016BC")]
	[Address(RVA = "0x45C9400", Offset = "0x45C9400", VA = "0x45C9400")]
	protected void OnCreated(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60016BD")]
	[Address(RVA = "0x45C9420", Offset = "0x45C9420", VA = "0x45C9420")]
	protected void OnDeleted(FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60016BE")]
	[Address(RVA = "0x45C9440", Offset = "0x45C9440", VA = "0x45C9440")]
	protected void OnRenamed(RenamedEventArgs e)
	{
	}

	[Token(Token = "0x60016BF")]
	[Address(RVA = "0x45C6A10", Offset = "0x45C6A10", VA = "0x45C6A10")]
	internal void DispatchEvents(FileAction act, string filename, ref RenamedEventArgs renamed)
	{
	}

	[Token(Token = "0x60016C0")]
	[Address(RVA = "0x45C8780", Offset = "0x45C8780", VA = "0x45C8780")]
	private void Start()
	{
	}

	[Token(Token = "0x60016C1")]
	[Address(RVA = "0x45C8850", Offset = "0x45C8850", VA = "0x45C8850")]
	private void Stop()
	{
	}
}
