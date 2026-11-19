// ==================== AoTTG2 cross-reference ====================
// Type: Utility.FileWatcherExtension
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/FileWatcherExtension.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$get_IncludeSubdirectories): clean
			return this._includeSubdirectories;
		}
		[Token(Token = "0x600567B")]
		[Address(RVA = "0x5CEC920", Offset = "0x5CEB920", VA = "0x5CEC920")]
		set
		{
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$set_IncludeSubdirectories): 3 lines keep C-only constructs
			Dictionary<object, object> __this_00;
			bool bVar1;
			System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
			System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
			byte local_20;

			local_48._dictionary = null;
			local_48._index = 0;
			local_48._version = 0;
			local_48._currentValue = null;
			if (this._includeSubdirectories == value) {
				return;
			}
			this._includeSubdirectories = value;
			__this_00 = (Dictionary<object, object>)this._watchers;
			if (__this_00 != null) {
				__this_01 = __this_00.Values;
				local_20 = (byte)&local_48;
				if (__this_01 != null) {
					local_48 = __this_01.GetEnumerator();
					while(true) {
						bVar1 = local_48.MoveNext();
						if (!bVar1) {
							local_48.Dispose();
							return;
						}
						if ((FileSystemWatcher)local_48._currentValue ==null) break;
						local_48._currentValue.IncludeSubdirectories = value;
					}
					throw new NullReferenceException();
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F00")]
	public NotifyFilters NotifyFilter
	{
		[Token(Token = "0x600567C")]
		[Address(RVA = "0x5CECAA0", Offset = "0x5CEBAA0", VA = "0x5CECAA0")]
		get
		{
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$get_NotifyFilter): clean
			return this._notifyFilter;
		}
		[Token(Token = "0x600567D")]
		[Address(RVA = "0x5CECAB0", Offset = "0x5CEBAB0", VA = "0x5CECAB0")]
		set
		{
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$set_NotifyFilter): 3 lines keep C-only constructs
			Dictionary<object, object> __this_00;
			bool bVar1;
			System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
			System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
			byte local_20;

			local_48._dictionary = null;
			local_48._index = 0;
			local_48._version = 0;
			local_48._currentValue = null;
			if (this._notifyFilter == value) {
				return;
			}
			this._notifyFilter = value;
			__this_00 = (Dictionary<object, object>)this._watchers;
			if (__this_00 != null) {
				__this_01 = __this_00.Values;
				local_20 = (byte)&local_48;
				if (__this_01 != null) {
					local_48 = __this_01.GetEnumerator();
					while(true) {
						bVar1 = local_48.MoveNext();
						if (!bVar1) {
							local_48.Dispose();
							return;
						}
						if ((FileSystemWatcher)local_48._currentValue ==null) break;
						local_48._currentValue.NotifyFilter = value;
					}
					throw new NullReferenceException();
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000F01")]
	public IEnumerable<string> WatchedPaths
	{
		[Token(Token = "0x6005688")]
		[Address(RVA = "0x5CEDA00", Offset = "0x5CECA00", VA = "0x5CEDA00")]
		get
		{
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$get_WatchedPaths): 1 lines keep C-only constructs
			Dictionary<object, object> __this_00;
			System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o pSVar1;

			__this_00 = (Dictionary<object, object>)this._watchers;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			pSVar1 = __this_00.Keys;
			return (IEnumerable<string>)pSVar1;
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
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$add_Changed): 2 lines keep C-only constructs
			FileSystemEventHandler pSVar1;
			Delegate value_00;
			FileSystemEventHandler a;
			bool bVar2;

			a = this.Changed;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((FileSystemEventHandler)value_00.klass != typeof(FileSystemEventHandler))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Changed, value_00, a);
				bVar2 = pSVar1 == a;
				a = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x6005673")]
		[Address(RVA = "0x5CEC520", Offset = "0x5CEB520", VA = "0x5CEC520")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$remove_Changed): 2 lines keep C-only constructs
			FileSystemEventHandler pSVar1;
			Delegate value_00;
			FileSystemEventHandler source;
			bool bVar2;

			source = this.Changed;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((FileSystemEventHandler)value_00.klass != typeof(FileSystemEventHandler))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Changed, value_00, source);
				bVar2 = pSVar1 == source;
				source = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
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
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$add_Created): 2 lines keep C-only constructs
			FileSystemEventHandler pSVar1;
			Delegate value_00;
			FileSystemEventHandler a;
			bool bVar2;

			a = this.Created;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((FileSystemEventHandler)value_00.klass != typeof(FileSystemEventHandler))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Created, value_00, a);
				bVar2 = pSVar1 == a;
				a = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x6005675")]
		[Address(RVA = "0x5CEC640", Offset = "0x5CEB640", VA = "0x5CEC640")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$remove_Created): 2 lines keep C-only constructs
			FileSystemEventHandler pSVar1;
			Delegate value_00;
			FileSystemEventHandler source;
			bool bVar2;

			source = this.Created;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((FileSystemEventHandler)value_00.klass != typeof(FileSystemEventHandler))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Created, value_00, source);
				bVar2 = pSVar1 == source;
				source = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
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
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$add_Deleted): 2 lines keep C-only constructs
			FileSystemEventHandler pSVar1;
			Delegate value_00;
			FileSystemEventHandler a;
			bool bVar2;

			a = this.Deleted;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((FileSystemEventHandler)value_00.klass != typeof(FileSystemEventHandler))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Deleted, value_00, a);
				bVar2 = pSVar1 == a;
				a = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x6005677")]
		[Address(RVA = "0x5CEC760", Offset = "0x5CEB760", VA = "0x5CEC760")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$remove_Deleted): 2 lines keep C-only constructs
			FileSystemEventHandler pSVar1;
			Delegate value_00;
			FileSystemEventHandler source;
			bool bVar2;

			source = this.Deleted;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((FileSystemEventHandler)value_00.klass != typeof(FileSystemEventHandler))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Deleted, value_00, source);
				bVar2 = pSVar1 == source;
				source = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
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
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$add_Renamed): 2 lines keep C-only constructs
			RenamedEventHandler pSVar1;
			Delegate value_00;
			RenamedEventHandler a;
			bool bVar2;

			a = this.Renamed;
			while(true) {
				value_00 = Delegate.Combine((Delegate)a, (Delegate)value);
				if ((value_00 != null) &&((RenamedEventHandler)value_00.klass != typeof(RenamedEventHandler))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Renamed, value_00, a);
				bVar2 = pSVar1 == a;
				a = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
		[Token(Token = "0x6005679")]
		[Address(RVA = "0x5CEC880", Offset = "0x5CEB880", VA = "0x5CEC880")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$remove_Renamed): 2 lines keep C-only constructs
			RenamedEventHandler pSVar1;
			Delegate value_00;
			RenamedEventHandler source;
			bool bVar2;

			source = this.Renamed;
			while(true) {
				value_00 = Delegate.Remove((Delegate)source, (Delegate)value);
				if ((value_00 != null) &&((RenamedEventHandler)value_00.klass != typeof(RenamedEventHandler))) break;
				pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.Renamed, value_00, source);
				bVar2 = pSVar1 == source;
				source = pSVar1;
				if (bVar2) {
					return;
				}
			}
			throw new InvalidCastException();
		}
	}

	[Token(Token = "0x600567E")]
	[Address(RVA = "0x5CECC30", Offset = "0x5CEBC30", VA = "0x5CECC30")]
	private void Awake()
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$Awake): 2 lines keep C-only constructs
		List<string> __this_00;
		bool bVar1;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_00 = this.watchPaths;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_48 = __this_00.GetEnumerator();
		local_20 = (byte)&local_48;
		while(true) {
			bVar1 = local_48.MoveNext();
			if (!bVar1) break;
			this.AddWatcher((String)local_48._current);
		}
		local_48.Dispose();
		return;
	}

	[Token(Token = "0x600567F")]
	[Address(RVA = "0x5CECFE0", Offset = "0x5CEBFE0", VA = "0x5CECFE0")]
	private void Update()
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$Update): 1 lines keep C-only constructs
		ConcurrentQueue<Action> __this_00;
		bool bVar1;
		int iVar2;
		object pIStack_28;

		pIStack_28 = null;
		if (0 < this.maxActionsPerFrame) {
			iVar2 = 0;
			do {
				__this_00 = this._mainThreadQueue;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				bVar1 = __this_00.TryDequeue(ref pIStack_28);
				if (!bVar1) {
					return;
				}
				if (pIStack_28 != null) {
					(*pIStack_28[1].monitor)(pIStack_28[4].klass,pIStack_28[2].monitor);
				}
				iVar2 = iVar2 + 1;
			} while (iVar2 < this.maxActionsPerFrame);
		}
		return;
	}

	[Token(Token = "0x6005680")]
	[Address(RVA = "0x5CED080", Offset = "0x5CEC080", VA = "0x5CED080")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$OnDestroy): clean
		this.DisposeWatchers();
		return;
	}

	[Token(Token = "0x6005681")]
	[Address(RVA = "0x5CECD60", Offset = "0x5CEBD60", VA = "0x5CECD60")]
	public void AddWatcher(string path)
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$AddWatcher): 4 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		FileSystemWatcher __this_00;
		FileSystemEventHandler pSVar3;
		RenamedEventHandler __this_01;
		String message;

		pSVar1 = (Dictionary<object, object>)this._watchers;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)path);
			if (bVar2) {
				return;
			}
			bVar2 = Directory.Exists(path);
			if (!bVar2) {
				message = String.Concat("Directory does not exist: ", path);
				Debug.LogWarning((object)message);
				return;
			}
			__this_00 = new FileSystemWatcher(path);
			if (__this_00 != null) {
				__this_00.IncludeSubdirectories = this._includeSubdirectories;
				__this_00.NotifyFilter = this._notifyFilter;
				__this_00.EnableRaisingEvents = true;
				pSVar3 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnChanged);
				__this_00.add_Changed(pSVar3);
				pSVar3 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnCreated);
				__this_00.add_Created(pSVar3);
				pSVar3 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnDeleted);
				__this_00.add_Deleted(pSVar3);
				__this_01 = new RenamedEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnRenamed);
				__this_00.add_Renamed(__this_01);
				pSVar1 = (Dictionary<object, object>)this._watchers;
				if (pSVar1 != null) {
					pSVar1.set_Item((object)path, (object)__this_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005682")]
	[Address(RVA = "0x5CED370", Offset = "0x5CEC370", VA = "0x5CED370")]
	public void RemoveWatcher(string path)
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$RemoveWatcher): 5 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		FileSystemWatcher pSVar2;
		bool bVar3;
		FileSystemEventHandler pSVar4;
		RenamedEventHandler __this_00;
		FileSystemWatcher local_30;

		local_30 = null;
		pSVar1 = (Dictionary<object, object>)this._watchers;
		if (pSVar1 != null) {
			bVar3 = pSVar1.TryGetValue((object)path, (object*)&local_30);
			if (!bVar3) {
				return;
			}
			if (local_30 != null) {
				local_30.EnableRaisingEvents = false;
				pSVar2 = local_30;
				pSVar4 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnChanged);
				if (pSVar2 != null) {
					pSVar2.remove_Changed(pSVar4);
					pSVar2 = local_30;
					pSVar4 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnCreated);
					if (pSVar2 != null) {
						pSVar2.remove_Created(pSVar4);
						pSVar2 = local_30;
						pSVar4 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnDeleted);
						if (pSVar2 != null) {
							pSVar2.remove_Deleted(pSVar4);
							pSVar2 = local_30;
							__this_00 = new RenamedEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnRenamed);
							if ((pSVar2 != null) &&(pSVar2.remove_Renamed(__this_00), local_30 != null)) {
								local_30.Dispose();
								pSVar1 = (Dictionary<object, object>)this._watchers;
								if (pSVar1 != null) {
									pSVar1.Remove((object)path);
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005683")]
	[Address(RVA = "0x5CED090", Offset = "0x5CEC090", VA = "0x5CED090")]
	private void DisposeWatchers()
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$DisposeWatchers): 9 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		FileSystemWatcher __this_00;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		FileSystemEventHandler pSVar3;
		RenamedEventHandler __this_02;
		byte[] auStack_60 = new byte[16];
		FileSystemWatcher pSStack_50;
		byte[] auStack_48 = new byte[16];
		FileSystemWatcher pSStack_38;

		pSVar1 = (Dictionary<object, object>)this._watchers;
		if (pSVar1 != null) {
			__this_01 = pSVar1.Values;
			if (__this_01 != null) {
				auStack_60.GetEnumerator(__this_01);
				pSStack_38 = pSStack_50;
				auStack_48._0_8_ = auStack_60._0_8_;
				auStack_48._8_8_ = auStack_60._8_8_;
				auStack_60._0_8_ = null;
				auStack_60._8_8_ =(System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o)auStack_48;
				while(true) {
					bVar2 = auStack_48.MoveNext();
					__this_00 = pSStack_38;
					if (!bVar2) break;
					if (pSStack_38 == null) {
						throw new NullReferenceException();
					}
					pSStack_38.EnableRaisingEvents = false;
					pSVar3 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnChanged);
					__this_00.remove_Changed(pSVar3);
					pSVar3 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnCreated);
					__this_00.remove_Created(pSVar3);
					pSVar3 = new FileSystemEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnDeleted);
					__this_00.remove_Deleted(pSVar3);
					__this_02 = new RenamedEventHandler((object)this, (intptr_t)MethodInfo_Utility_FileWatcherExtension_OnRenamed);
					__this_00.remove_Renamed(__this_02);
					__this_00.Dispose();
				}
				auStack_48.Dispose();
				pSVar1 = (Dictionary<object, object>)this._watchers;
				if (pSVar1 != null) {
					pSVar1.Clear();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005684")]
	[Address(RVA = "0x5CED580", Offset = "0x5CEC580", VA = "0x5CED580")]
	private void OnChanged(object sender, FileSystemEventArgs e)
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$OnChanged): 1 lines keep C-only constructs
		ConcurrentQueue<Action> __this_00;
		FileWatcherExtension.c__DisplayClass30_0 __this_01;
		Action __this_02;

		__this_01 = new FileWatcherExtension.c__DisplayClass30_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.sender = sender;
			__this_01.e = e;
			__this_00 = this._mainThreadQueue;
			__this_02 = new Action((object)__this_01, (intptr_t)MethodInfo_Utility_FileWatcherExtension_c__DisplayClass30_0_OnChanged_b__0);
			if (__this_00 != null) {
				__this_00.Enqueue((object)__this_02);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005685")]
	[Address(RVA = "0x5CED6A0", Offset = "0x5CEC6A0", VA = "0x5CED6A0")]
	private void OnCreated(object sender, FileSystemEventArgs e)
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$OnCreated): 1 lines keep C-only constructs
		ConcurrentQueue<Action> __this_00;
		FileWatcherExtension.c__DisplayClass31_0 __this_01;
		Action __this_02;

		__this_01 = new FileWatcherExtension.c__DisplayClass31_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.sender = sender;
			__this_01.e = e;
			__this_00 = this._mainThreadQueue;
			__this_02 = new Action((object)__this_01, (intptr_t)MethodInfo_Utility_FileWatcherExtension_c__DisplayClass31_0_OnCreated_b__0);
			if (__this_00 != null) {
				__this_00.Enqueue((object)__this_02);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005686")]
	[Address(RVA = "0x5CED7C0", Offset = "0x5CEC7C0", VA = "0x5CED7C0")]
	private void OnDeleted(object sender, FileSystemEventArgs e)
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$OnDeleted): 1 lines keep C-only constructs
		ConcurrentQueue<Action> __this_00;
		FileWatcherExtension.c__DisplayClass32_0 __this_01;
		Action __this_02;

		__this_01 = new FileWatcherExtension.c__DisplayClass32_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.sender = sender;
			__this_01.e = e;
			__this_00 = this._mainThreadQueue;
			__this_02 = new Action((object)__this_01, (intptr_t)MethodInfo_Utility_FileWatcherExtension_c__DisplayClass32_0_OnDeleted_b__0);
			if (__this_00 != null) {
				__this_00.Enqueue((object)__this_02);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005687")]
	[Address(RVA = "0x5CED8E0", Offset = "0x5CEC8E0", VA = "0x5CED8E0")]
	private void OnRenamed(object sender, RenamedEventArgs e)
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$OnRenamed): 1 lines keep C-only constructs
		ConcurrentQueue<Action> __this_00;
		FileWatcherExtension.c__DisplayClass33_0 __this_01;
		Action __this_02;

		__this_01 = new FileWatcherExtension.c__DisplayClass33_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.sender = sender;
			__this_01.e = e;
			__this_00 = this._mainThreadQueue;
			__this_02 = new Action((object)__this_01, (intptr_t)MethodInfo_Utility_FileWatcherExtension_c__DisplayClass33_0_OnRenamed_b__0);
			if (__this_00 != null) {
				__this_00.Enqueue((object)__this_02);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005689")]
	[Address(RVA = "0x5CEDA40", Offset = "0x5CECA40", VA = "0x5CEDA40")]
	public FileWatcherExtension()
	{
		// Lifted from source/cpp/Utility/FileWatcherExtension.c (Utility.FileWatcherExtension$$.ctor): 2 lines keep C-only constructs
		List<string> __this_00;
		Dictionary<string, FileSystemWatcher> __this_01;
		ConcurrentQueue<Action> __this_02;

		if (Il2CppMethodInitialized_075482db == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(ConcurrentQueue<Action>)) ;
			Il2CppMethodInitialized_075482db = true;
		}
		__this_00 = new List<string>();
		this.watchPaths = __this_00;
		this._includeSubdirectories = true;
		this._notifyFilter = 0x13;
		this.maxActionsPerFrame = 10;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, FileSystemWatcher>));
		__this_01 = new Dictionary<object, object>();
		this._watchers = __this_01;
		__this_02 = new ConcurrentQueue<Action>();
		this._mainThreadQueue = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/FileWatcherExtension.c.

	// Utility.FileWatcherExtension.<>c__DisplayClass30_0$$.ctor: clean
	private void c__DisplayClass30_0__ctor()
	{
		base();
		return;
	}

	// Utility.FileWatcherExtension.<>c__DisplayClass31_0$$.ctor: clean
	private void c__DisplayClass31_0__ctor()
	{
		base();
		return;
	}

	// Utility.FileWatcherExtension.<>c__DisplayClass32_0$$.ctor: clean
	private void c__DisplayClass32_0__ctor()
	{
		base();
		return;
	}

	// Utility.FileWatcherExtension.<>c__DisplayClass33_0$$.ctor: clean
	private void c__DisplayClass33_0__ctor()
	{
		base();
		return;
	}

	// Utility.FileWatcherExtension.<>c__DisplayClass30_0$$<OnChanged>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass30_0__OnChanged_b__0()
	{
		FileWatcherExtension pUVar1;
		FileSystemEventHandler pSVar2;
		code *vtableDispatch;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pUVar1.Changed;
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,this.sender,this.e,pSVar2.method, vtableDispatch);
		return;
	}

	// Utility.FileWatcherExtension.<>c__DisplayClass31_0$$<OnCreated>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass31_0__OnCreated_b__0()
	{
		FileWatcherExtension pUVar1;
		FileSystemEventHandler pSVar2;
		code *vtableDispatch;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pUVar1.Created;
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,this.sender,this.e,pSVar2.method, vtableDispatch);
		return;
	}

	// Utility.FileWatcherExtension.<>c__DisplayClass32_0$$<OnDeleted>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass32_0__OnDeleted_b__0()
	{
		FileWatcherExtension pUVar1;
		FileSystemEventHandler pSVar2;
		code *vtableDispatch;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pUVar1.Deleted;
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,this.sender,this.e,pSVar2.method, vtableDispatch);
		return;
	}

	// Utility.FileWatcherExtension.<>c__DisplayClass33_0$$<OnRenamed>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass33_0__OnRenamed_b__0()
	{
		FileWatcherExtension pUVar1;
		RenamedEventHandler pSVar2;
		code *vtableDispatch;

		pUVar1 = this.__4__this;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pUVar1.Renamed;
		if (pSVar2 == null) {
			return;
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		(*vtableDispatch)(pSVar2.method_code,this.sender,this.e,pSVar2.method, vtableDispatch);
		return;
	}
}
