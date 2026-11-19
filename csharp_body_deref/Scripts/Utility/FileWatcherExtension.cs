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

[Token(Token = "0x2000925")]
public class FileWatcherExtension : MonoBehaviour
{
	[Token(Token = "0x4002E0D")]
	[FieldOffset(Offset = "0x20")]
	[Header("Watcher Settings")]
	[SerializeField]
	private List<string> watchPaths;

	[Token(Token = "0x4002E0E")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private bool _includeSubdirectories;

	[Token(Token = "0x4002E0F")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private NotifyFilters _notifyFilter;

	[Token(Token = "0x4002E10")]
	[FieldOffset(Offset = "0x30")]
	[Header("Dispatch Settings")]
	[SerializeField]
	private int maxActionsPerFrame;

	[Token(Token = "0x4002E11")]
	[FieldOffset(Offset = "0x38")]
	private readonly Dictionary<string, FileSystemWatcher> _watchers;

	[Token(Token = "0x4002E12")]
	[FieldOffset(Offset = "0x40")]
	private readonly ConcurrentQueue<Action> _mainThreadQueue;

	[Token(Token = "0x4002E13")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Changed;

	[Token(Token = "0x4002E14")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Created;

	[Token(Token = "0x4002E15")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private FileSystemEventHandler m_Deleted;

	[Token(Token = "0x4002E16")]
	[FieldOffset(Offset = "0x60")]
	[CompilerGenerated]
	private RenamedEventHandler m_Renamed;

	[Token(Token = "0x17000EFF")]
	public bool IncludeSubdirectories
	{
		[Token(Token = "0x600567A")]
		[Address(RVA = "0x5CEC910", Offset = "0x5CEB910", VA = "0x5CEC910")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600567B")]
		[Address(RVA = "0x5CEC920", Offset = "0x5CEB920", VA = "0x5CEC920")]
		set
		{
		}
	}

	[Token(Token = "0x17000F00")]
	public NotifyFilters NotifyFilter
	{
		[Token(Token = "0x600567C")]
		[Address(RVA = "0x5CECAA0", Offset = "0x5CEBAA0", VA = "0x5CECAA0")]
		get
		{
			return default(NotifyFilters);
		}
		[Token(Token = "0x600567D")]
		[Address(RVA = "0x5CECAB0", Offset = "0x5CEBAB0", VA = "0x5CECAB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000F01")]
	public IEnumerable<string> WatchedPaths
	{
		[Token(Token = "0x6005688")]
		[Address(RVA = "0x5CEDA00", Offset = "0x5CECA00", VA = "0x5CEDA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400000C")]
	public event FileSystemEventHandler Changed
	{
		[Token(Token = "0x6005672")]
		[Address(RVA = "0x5CEC490", Offset = "0x5CEB490", VA = "0x5CEC490")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005673")]
		[Address(RVA = "0x5CEC520", Offset = "0x5CEB520", VA = "0x5CEC520")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000D")]
	public event FileSystemEventHandler Created
	{
		[Token(Token = "0x6005674")]
		[Address(RVA = "0x5CEC5B0", Offset = "0x5CEB5B0", VA = "0x5CEC5B0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005675")]
		[Address(RVA = "0x5CEC640", Offset = "0x5CEB640", VA = "0x5CEC640")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000E")]
	public event FileSystemEventHandler Deleted
	{
		[Token(Token = "0x6005676")]
		[Address(RVA = "0x5CEC6D0", Offset = "0x5CEB6D0", VA = "0x5CEC6D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005677")]
		[Address(RVA = "0x5CEC760", Offset = "0x5CEB760", VA = "0x5CEC760")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x1400000F")]
	public event RenamedEventHandler Renamed
	{
		[Token(Token = "0x6005678")]
		[Address(RVA = "0x5CEC7F0", Offset = "0x5CEB7F0", VA = "0x5CEC7F0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6005679")]
		[Address(RVA = "0x5CEC880", Offset = "0x5CEB880", VA = "0x5CEC880")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600567E")]
	[Address(RVA = "0x5CECC30", Offset = "0x5CEBC30", VA = "0x5CECC30")]
	private void Awake()
	{
	}

	[Token(Token = "0x600567F")]
	[Address(RVA = "0x5CECFE0", Offset = "0x5CEBFE0", VA = "0x5CECFE0")]
	private void Update()
	{
	}

	[Token(Token = "0x6005680")]
	[Address(RVA = "0x5CED080", Offset = "0x5CEC080", VA = "0x5CED080")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6005681")]
	[Address(RVA = "0x5CECD60", Offset = "0x5CEBD60", VA = "0x5CECD60")]
	public void AddWatcher(string path)
	{
	}

	[Token(Token = "0x6005682")]
	[Address(RVA = "0x5CED370", Offset = "0x5CEC370", VA = "0x5CED370")]
	public void RemoveWatcher(string path)
	{
	}

	[Token(Token = "0x6005683")]
	[Address(RVA = "0x5CED090", Offset = "0x5CEC090", VA = "0x5CED090")]
	private void DisposeWatchers()
	{
	}

	[Token(Token = "0x6005684")]
	[Address(RVA = "0x5CED580", Offset = "0x5CEC580", VA = "0x5CED580")]
	private void OnChanged(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6005685")]
	[Address(RVA = "0x5CED6A0", Offset = "0x5CEC6A0", VA = "0x5CED6A0")]
	private void OnCreated(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6005686")]
	[Address(RVA = "0x5CED7C0", Offset = "0x5CEC7C0", VA = "0x5CED7C0")]
	private void OnDeleted(object sender, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6005687")]
	[Address(RVA = "0x5CED8E0", Offset = "0x5CEC8E0", VA = "0x5CED8E0")]
	private void OnRenamed(object sender, RenamedEventArgs e)
	{
	}

	[Token(Token = "0x6005689")]
	[Address(RVA = "0x5CEDA40", Offset = "0x5CECA40", VA = "0x5CEDA40")]
	public FileWatcherExtension()
	{
	}
}
