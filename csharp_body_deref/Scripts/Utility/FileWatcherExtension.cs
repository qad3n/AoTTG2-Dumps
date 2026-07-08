using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006E8")]
public class FileWatcherExtension : MonoBehaviour
{
	[Token(Token = "0x400213A")]
	[FieldOffset(Offset = "0x20")]
	[Header("Watcher Settings")]
	[SerializeField]
	private List<string> watchPaths;

	[Token(Token = "0x400213B")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool _includeSubdirectories;

	[Token(Token = "0x400213C")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private NotifyFilters _notifyFilter;

	[Token(Token = "0x400213D")]
	[FieldOffset(Offset = "0x30")]
	[Header("Dispatch Settings")]
	[SerializeField]
	private int maxActionsPerFrame;

	[Token(Token = "0x400213E")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, FileSystemWatcher> _watchers;

	[Token(Token = "0x400213F")]
	[FieldOffset(Offset = "0x40")]
	private readonly ConcurrentQueue<Action> _mainThreadQueue;

	[Token(Token = "0x17000D41")]
	public bool IncludeSubdirectories
	{
		[Token(Token = "0x6004462")]
		[Address(RVA = "0x4078940", Offset = "0x4078940", VA = "0x4078940")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004463")]
		[Address(RVA = "0x4078950", Offset = "0x4078950", VA = "0x4078950")]
		set
		{
		}
	}

	[Token(Token = "0x17000D42")]
	public NotifyFilters NotifyFilter
	{
		[Token(Token = "0x6004464")]
		[Address(RVA = "0x4078AE0", Offset = "0x4078AE0", VA = "0x4078AE0")]
		get
		{
			return default(NotifyFilters);
		}
		[Token(Token = "0x6004465")]
		[Address(RVA = "0x4078AF0", Offset = "0x4078AF0", VA = "0x4078AF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000D43")]
	public IEnumerable<string> WatchedPaths
	{
		[Token(Token = "0x6004470")]
		[Address(RVA = "0x4079AB0", Offset = "0x4079AB0", VA = "0x4079AB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000008")]
	public event FileSystemEventHandler Changed
	{
		[Token(Token = "0x600445A")]
		[Address(RVA = "0x40784C0", Offset = "0x40784C0", VA = "0x40784C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600445B")]
		[Address(RVA = "0x4078550", Offset = "0x4078550", VA = "0x4078550")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000009")]
	public event FileSystemEventHandler Created
	{
		[Token(Token = "0x600445C")]
		[Address(RVA = "0x40785E0", Offset = "0x40785E0", VA = "0x40785E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600445D")]
		[Address(RVA = "0x4078670", Offset = "0x4078670", VA = "0x4078670")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public event FileSystemEventHandler Deleted
	{
		[Token(Token = "0x600445E")]
		[Address(RVA = "0x4078700", Offset = "0x4078700", VA = "0x4078700")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600445F")]
		[Address(RVA = "0x4078790", Offset = "0x4078790", VA = "0x4078790")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event RenamedEventHandler Renamed
	{
		[Token(Token = "0x6004460")]
		[Address(RVA = "0x4078820", Offset = "0x4078820", VA = "0x4078820")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6004461")]
		[Address(RVA = "0x40788B0", Offset = "0x40788B0", VA = "0x40788B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6004466")]
	[Address(RVA = "0x4078C70", Offset = "0x4078C70", VA = "0x4078C70")]
	private void Awake()
	{
	}

	[Token(Token = "0x6004467")]
	[Address(RVA = "0x4079040", Offset = "0x4079040", VA = "0x4079040")]
	private void Update()
	{
	}

	[Token(Token = "0x6004468")]
	[Address(RVA = "0x40790E0", Offset = "0x40790E0", VA = "0x40790E0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004469")]
	[Address(RVA = "0x4078DC0", Offset = "0x4078DC0", VA = "0x4078DC0")]
	public void AddWatcher(string path)
	{
	}

	[Token(Token = "0x600446A")]
	[Address(RVA = "0x4079420", Offset = "0x4079420", VA = "0x4079420")]
	public void RemoveWatcher(string path)
	{
	}

	[Token(Token = "0x600446B")]
	[Address(RVA = "0x40790F0", Offset = "0x40790F0", VA = "0x40790F0")]
	private void DisposeWatchers()
	{
	}

	[Token(Token = "0x600446C")]
	[Address(RVA = "0x4079630", Offset = "0x4079630", VA = "0x4079630")]
	private void OnChanged(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x600446D")]
	[Address(RVA = "0x4079750", Offset = "0x4079750", VA = "0x4079750")]
	private void OnCreated(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x600446E")]
	[Address(RVA = "0x4079870", Offset = "0x4079870", VA = "0x4079870")]
	private void OnDeleted(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x600446F")]
	[Address(RVA = "0x4079990", Offset = "0x4079990", VA = "0x4079990")]
	private void OnRenamed(object sender, RenamedEventArgs e)
	{
	}

	[Token(Token = "0x6004471")]
	[Address(RVA = "0x4079AF0", Offset = "0x4079AF0", VA = "0x4079AF0")]
	public FileWatcherExtension()
	{
	}
}
