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

[Token(Token = "0x20008BB")]
public class FileWatcherExtension : MonoBehaviour
{
	[Token(Token = "0x4002B56")]
	[FieldOffset(Offset = "0x20")]
	[Header("Watcher Settings")]
	[SerializeField]
	private List<string> watchPaths;

	[Token(Token = "0x4002B57")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool _includeSubdirectories;

	[Token(Token = "0x4002B58")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private NotifyFilters _notifyFilter;

	[Token(Token = "0x4002B59")]
	[FieldOffset(Offset = "0x30")]
	[Header("Dispatch Settings")]
	[SerializeField]
	private int maxActionsPerFrame;

	[Token(Token = "0x4002B5A")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, FileSystemWatcher> _watchers;

	[Token(Token = "0x4002B5B")]
	[FieldOffset(Offset = "0x40")]
	private readonly ConcurrentQueue<Action> _mainThreadQueue;

	[Token(Token = "0x4002B5C")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Changed;

	[Token(Token = "0x4002B5D")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Created;

	[Token(Token = "0x4002B5E")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Deleted;

	[Token(Token = "0x4002B5F")]
	[FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	private RenamedEventHandler m_Renamed;

	[Token(Token = "0x17000F1C")]
	public bool IncludeSubdirectories
	{
		[Token(Token = "0x6005326")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005327")]
		[Address(RVA = "0x23389D0", Offset = "0x2336FD0", VA = "0x1823389D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000F1D")]
	public NotifyFilters NotifyFilter
	{
		[Token(Token = "0x6005328")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		get
		{
			return default(NotifyFilters);
		}
		[Token(Token = "0x6005329")]
		[Address(RVA = "0x2338B30", Offset = "0x2337130", VA = "0x182338B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000F1E")]
	public IEnumerable<string> WatchedPaths
	{
		[Token(Token = "0x6005334")]
		[Address(RVA = "0x2338700", Offset = "0x2336D00", VA = "0x182338700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000009")]
	public event FileSystemEventHandler Changed
	{
		[Token(Token = "0x600531E")]
		[Address(RVA = "0x2338480", Offset = "0x2336A80", VA = "0x182338480")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600531F")]
		[Address(RVA = "0x2338750", Offset = "0x2336D50", VA = "0x182338750")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000A")]
	public event FileSystemEventHandler Created
	{
		[Token(Token = "0x6005320")]
		[Address(RVA = "0x2338520", Offset = "0x2336B20", VA = "0x182338520")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005321")]
		[Address(RVA = "0x23387F0", Offset = "0x2336DF0", VA = "0x1823387F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000B")]
	public event FileSystemEventHandler Deleted
	{
		[Token(Token = "0x6005322")]
		[Address(RVA = "0x23385C0", Offset = "0x2336BC0", VA = "0x1823385C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005323")]
		[Address(RVA = "0x2338890", Offset = "0x2336E90", VA = "0x182338890")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000C")]
	public event RenamedEventHandler Renamed
	{
		[Token(Token = "0x6005324")]
		[Address(RVA = "0x2338660", Offset = "0x2336C60", VA = "0x182338660")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005325")]
		[Address(RVA = "0x2338930", Offset = "0x2336F30", VA = "0x182338930")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600532A")]
	[Address(RVA = "0x2337930", Offset = "0x2335F30", VA = "0x182337930")]
	private void Awake()
	{
	}

	[Token(Token = "0x600532B")]
	[Address(RVA = "0x23382D0", Offset = "0x23368D0", VA = "0x1823382D0")]
	private void Update()
	{
	}

	[Token(Token = "0x600532C")]
	[Address(RVA = "0x2337FB0", Offset = "0x23365B0", VA = "0x182337FB0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600532D")]
	[Address(RVA = "0x23376C0", Offset = "0x2335CC0", VA = "0x1823376C0")]
	public void AddWatcher(string path)
	{
	}

	[Token(Token = "0x600532E")]
	[Address(RVA = "0x23380B0", Offset = "0x23366B0", VA = "0x1823380B0")]
	public void RemoveWatcher(string path)
	{
	}

	[Token(Token = "0x600532F")]
	[Address(RVA = "0x2337A40", Offset = "0x2336040", VA = "0x182337A40")]
	private void DisposeWatchers()
	{
	}

	[Token(Token = "0x6005330")]
	[Address(RVA = "0x2337CE0", Offset = "0x23362E0", VA = "0x182337CE0")]
	private void OnChanged(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6005331")]
	[Address(RVA = "0x2337DD0", Offset = "0x23363D0", VA = "0x182337DD0")]
	private void OnCreated(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6005332")]
	[Address(RVA = "0x2337EC0", Offset = "0x23364C0", VA = "0x182337EC0")]
	private void OnDeleted(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6005333")]
	[Address(RVA = "0x2337FC0", Offset = "0x23365C0", VA = "0x182337FC0")]
	private void OnRenamed(object sender, RenamedEventArgs e)
	{
	}

	[Token(Token = "0x6005335")]
	[Address(RVA = "0x2338360", Offset = "0x2336960", VA = "0x182338360")]
	public FileWatcherExtension()
	{
	}
}
