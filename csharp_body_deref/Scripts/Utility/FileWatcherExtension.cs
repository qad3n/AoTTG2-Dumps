// ==================== AoTTG2 cross-reference ====================
// Type: Utility.FileWatcherExtension
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/FileWatcherExtension.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000736")]
public class FileWatcherExtension : MonoBehaviour
{
	[Token(Token = "0x4002297")]
	[FieldOffset(Offset = "0x20")]
	[Header("Watcher Settings")]
	[SerializeField]
	private List<string> watchPaths;

	[Token(Token = "0x4002298")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool _includeSubdirectories;

	[Token(Token = "0x4002299")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private NotifyFilters _notifyFilter;

	[Token(Token = "0x400229A")]
	[FieldOffset(Offset = "0x30")]
	[Header("Dispatch Settings")]
	[SerializeField]
	private int maxActionsPerFrame;

	[Token(Token = "0x400229B")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, FileSystemWatcher> _watchers;

	[Token(Token = "0x400229C")]
	[FieldOffset(Offset = "0x40")]
	private readonly ConcurrentQueue<Action> _mainThreadQueue;

	[Token(Token = "0x17000DBB")]
	public bool IncludeSubdirectories
	{
		[Token(Token = "0x60046CA")]
		[Address(RVA = "0x4390920", Offset = "0x4390920", VA = "0x4390920")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60046CB")]
		[Address(RVA = "0x4390930", Offset = "0x4390930", VA = "0x4390930")]
		set
		{
		}
	}

	[Token(Token = "0x17000DBC")]
	public NotifyFilters NotifyFilter
	{
		[Token(Token = "0x60046CC")]
		[Address(RVA = "0x4390AC0", Offset = "0x4390AC0", VA = "0x4390AC0")]
		get
		{
			return default(NotifyFilters);
		}
		[Token(Token = "0x60046CD")]
		[Address(RVA = "0x4390AD0", Offset = "0x4390AD0", VA = "0x4390AD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000DBD")]
	public IEnumerable<string> WatchedPaths
	{
		[Token(Token = "0x60046D8")]
		[Address(RVA = "0x4391A90", Offset = "0x4391A90", VA = "0x4391A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000009")]
	public event FileSystemEventHandler Changed
	{
		[Token(Token = "0x60046C2")]
		[Address(RVA = "0x43904A0", Offset = "0x43904A0", VA = "0x43904A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60046C3")]
		[Address(RVA = "0x4390530", Offset = "0x4390530", VA = "0x4390530")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public event FileSystemEventHandler Created
	{
		[Token(Token = "0x60046C4")]
		[Address(RVA = "0x43905C0", Offset = "0x43905C0", VA = "0x43905C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60046C5")]
		[Address(RVA = "0x4390650", Offset = "0x4390650", VA = "0x4390650")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event FileSystemEventHandler Deleted
	{
		[Token(Token = "0x60046C6")]
		[Address(RVA = "0x43906E0", Offset = "0x43906E0", VA = "0x43906E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60046C7")]
		[Address(RVA = "0x4390770", Offset = "0x4390770", VA = "0x4390770")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public event RenamedEventHandler Renamed
	{
		[Token(Token = "0x60046C8")]
		[Address(RVA = "0x4390800", Offset = "0x4390800", VA = "0x4390800")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60046C9")]
		[Address(RVA = "0x4390890", Offset = "0x4390890", VA = "0x4390890")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60046CE")]
	[Address(RVA = "0x4390C50", Offset = "0x4390C50", VA = "0x4390C50")]
	private void Awake()
	{
	}

	[Token(Token = "0x60046CF")]
	[Address(RVA = "0x4391020", Offset = "0x4391020", VA = "0x4391020")]
	private void Update()
	{
	}

	[Token(Token = "0x60046D0")]
	[Address(RVA = "0x43910C0", Offset = "0x43910C0", VA = "0x43910C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60046D1")]
	[Address(RVA = "0x4390DA0", Offset = "0x4390DA0", VA = "0x4390DA0")]
	public void AddWatcher(string path)
	{
	}

	[Token(Token = "0x60046D2")]
	[Address(RVA = "0x4391400", Offset = "0x4391400", VA = "0x4391400")]
	public void RemoveWatcher(string path)
	{
	}

	[Token(Token = "0x60046D3")]
	[Address(RVA = "0x43910D0", Offset = "0x43910D0", VA = "0x43910D0")]
	private void DisposeWatchers()
	{
	}

	[Token(Token = "0x60046D4")]
	[Address(RVA = "0x4391610", Offset = "0x4391610", VA = "0x4391610")]
	private void OnChanged(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60046D5")]
	[Address(RVA = "0x4391730", Offset = "0x4391730", VA = "0x4391730")]
	private void OnCreated(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60046D6")]
	[Address(RVA = "0x4391850", Offset = "0x4391850", VA = "0x4391850")]
	private void OnDeleted(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x60046D7")]
	[Address(RVA = "0x4391970", Offset = "0x4391970", VA = "0x4391970")]
	private void OnRenamed(object sender, RenamedEventArgs e)
	{
	}

	[Token(Token = "0x60046D9")]
	[Address(RVA = "0x4391AD0", Offset = "0x4391AD0", VA = "0x4391AD0")]
	public FileWatcherExtension()
	{
	}
}
