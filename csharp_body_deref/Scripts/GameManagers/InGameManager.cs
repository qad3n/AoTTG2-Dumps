// ==================== AoTTG2 cross-reference ====================
// Type: GameManagers.InGameManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GameManagers/InGameManager.c
// Prior real C# source (older reference): Assets/Scripts/GameManagers/InGameManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UI;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x2000213")]
internal class InGameManager : BaseGameManager
{
	[Token(Token = "0x2000216")]
	[CompilerGenerated]
	private sealed class _003CFinishRestartGame_003Ed__46 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B68")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B69")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000192")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D11")]
			[Address(RVA = "0x44671D0", Offset = "0x44671D0", VA = "0x44671D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000193")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D13")]
			[Address(RVA = "0x4467220", Offset = "0x4467220", VA = "0x4467220", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x445B9B0", Offset = "0x445B9B0", VA = "0x445B9B0")]
		[DebuggerHidden]
		public _003CFinishRestartGame_003Ed__46(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x4467000", Offset = "0x4467000", VA = "0x4467000", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x4467010", Offset = "0x4467010", VA = "0x4467010", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x44671E0", Offset = "0x44671E0", VA = "0x44671E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000217")]
	[CompilerGenerated]
	private sealed class _003CGetAllCharactersEnumerable_003Ed__36 : IEnumerable<BaseCharacter>, IEnumerable, IEnumerator<BaseCharacter>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B6A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B6B")]
		[FieldOffset(Offset = "0x18")]
		private BaseCharacter _003C_003E2__current;

		[Token(Token = "0x4000B6C")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000B6D")]
		[FieldOffset(Offset = "0x28")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000B6E")]
		[FieldOffset(Offset = "0x30")]
		private HashSet<Human>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x4000B6F")]
		[FieldOffset(Offset = "0x48")]
		private HashSet<BasicTitan>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4000B70")]
		[FieldOffset(Offset = "0x60")]
		private HashSet<BaseShifter>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x17000194")]
		private BaseCharacter System_002ECollections_002EGeneric_002EIEnumerator_003CCharacters_002EBaseCharacter_003E_002ECurrent
		{
			[Token(Token = "0x6000D1A")]
			[Address(RVA = "0x4467A10", Offset = "0x4467A10", VA = "0x4467A10", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000195")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D1C")]
			[Address(RVA = "0x4467A60", Offset = "0x4467A60", VA = "0x4467A60", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x445B0D0", Offset = "0x445B0D0", VA = "0x445B0D0")]
		[DebuggerHidden]
		public _003CGetAllCharactersEnumerable_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x4467230", Offset = "0x4467230", VA = "0x4467230", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x4467320", Offset = "0x4467320", VA = "0x4467320", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D17")]
		[Address(RVA = "0x4467950", Offset = "0x4467950", VA = "0x4467950")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000D18")]
		[Address(RVA = "0x4467990", Offset = "0x4467990", VA = "0x4467990")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000D19")]
		[Address(RVA = "0x44679D0", Offset = "0x44679D0", VA = "0x44679D0")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x6000D1B")]
		[Address(RVA = "0x4467A20", Offset = "0x4467A20", VA = "0x4467A20", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000D1D")]
		[Address(RVA = "0x4467A70", Offset = "0x4467A70", VA = "0x4467A70", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<BaseCharacter> System_002ECollections_002EGeneric_002EIEnumerable_003CCharacters_002EBaseCharacter_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000D1E")]
		[Address(RVA = "0x4467B10", Offset = "0x4467B10", VA = "0x4467B10", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000218")]
	[CompilerGenerated]
	private sealed class _003COnLoadLevelSkinRPC_003Ed__111 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B71")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B72")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000196")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D22")]
			[Address(RVA = "0x4467B50", Offset = "0x4467B50", VA = "0x4467B50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000197")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D24")]
			[Address(RVA = "0x4467BA0", Offset = "0x4467BA0", VA = "0x4467BA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x4466530", Offset = "0x4466530", VA = "0x4466530")]
		[DebuggerHidden]
		public _003COnLoadLevelSkinRPC_003Ed__111(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D20")]
		[Address(RVA = "0x4467B20", Offset = "0x4467B20", VA = "0x4467B20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x4467B30", Offset = "0x4467B30", VA = "0x4467B30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D23")]
		[Address(RVA = "0x4467B60", Offset = "0x4467B60", VA = "0x4467B60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000219")]
	[CompilerGenerated]
	private sealed class _003COnLoadSkyboxRPC_003Ed__109 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B73")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B74")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B75")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000B76")]
		[FieldOffset(Offset = "0x28")]
		public string[] urls;

		[Token(Token = "0x17000198")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D28")]
			[Address(RVA = "0x4468120", Offset = "0x4468120", VA = "0x4468120", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000199")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D2A")]
			[Address(RVA = "0x4468170", Offset = "0x4468170", VA = "0x4468170", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x4466450", Offset = "0x4466450", VA = "0x4466450")]
		[DebuggerHidden]
		public _003COnLoadSkyboxRPC_003Ed__109(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x4467BB0", Offset = "0x4467BB0", VA = "0x4467BB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x4467BC0", Offset = "0x4467BC0", VA = "0x4467BC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D29")]
		[Address(RVA = "0x4468130", Offset = "0x4468130", VA = "0x4468130", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200021A")]
	[CompilerGenerated]
	private sealed class _003CReloadSkybox_003Ed__110 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B77")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B78")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700019A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D2E")]
			[Address(RVA = "0x4468350", Offset = "0x4468350", VA = "0x4468350", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700019B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D30")]
			[Address(RVA = "0x44683A0", Offset = "0x44683A0", VA = "0x44683A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D2B")]
		[Address(RVA = "0x44664C0", Offset = "0x44664C0", VA = "0x44664C0")]
		[DebuggerHidden]
		public _003CReloadSkybox_003Ed__110(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D2C")]
		[Address(RVA = "0x4468180", Offset = "0x4468180", VA = "0x4468180", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D2D")]
		[Address(RVA = "0x4468190", Offset = "0x4468190", VA = "0x4468190", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D2F")]
		[Address(RVA = "0x4468360", Offset = "0x4468360", VA = "0x4468360", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200021B")]
	[CompilerGenerated]
	private sealed class _003CRespawnForever_003Ed__64 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B79")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B7A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B7B")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000B7C")]
		[FieldOffset(Offset = "0x28")]
		public float delay;

		[Token(Token = "0x1700019C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D34")]
			[Address(RVA = "0x4468490", Offset = "0x4468490", VA = "0x4468490", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700019D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D36")]
			[Address(RVA = "0x44684E0", Offset = "0x44684E0", VA = "0x44684E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D31")]
		[Address(RVA = "0x445F5E0", Offset = "0x445F5E0", VA = "0x445F5E0")]
		[DebuggerHidden]
		public _003CRespawnForever_003Ed__64(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x44683B0", Offset = "0x44683B0", VA = "0x44683B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x44683C0", Offset = "0x44683C0", VA = "0x44683C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x44684A0", Offset = "0x44684A0", VA = "0x44684A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200021C")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansAtCoroutine_003Ed__77 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B7D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B7E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B7F")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000B80")]
		[FieldOffset(Offset = "0x28")]
		public string type;

		[Token(Token = "0x4000B81")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x4000B82")]
		[FieldOffset(Offset = "0x3C")]
		public float rotationY;

		[Token(Token = "0x4000B83")]
		[FieldOffset(Offset = "0x40")]
		public int count;

		[Token(Token = "0x4000B84")]
		[FieldOffset(Offset = "0x44")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x1700019E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D3A")]
			[Address(RVA = "0x4468610", Offset = "0x4468610", VA = "0x4468610", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700019F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D3C")]
			[Address(RVA = "0x4468660", Offset = "0x4468660", VA = "0x4468660", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x4462F80", Offset = "0x4462F80", VA = "0x4462F80")]
		[DebuggerHidden]
		public _003CSpawnAITitansAtCoroutine_003Ed__77(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x44684F0", Offset = "0x44684F0", VA = "0x44684F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D39")]
		[Address(RVA = "0x4468500", Offset = "0x4468500", VA = "0x4468500", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D3B")]
		[Address(RVA = "0x4468620", Offset = "0x4468620", VA = "0x4468620", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200021D")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansCoroutine_003Ed__75 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B85")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B86")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B87")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000B88")]
		[FieldOffset(Offset = "0x28")]
		public int count;

		[Token(Token = "0x4000B89")]
		[FieldOffset(Offset = "0x30")]
		public string type;

		[Token(Token = "0x4000B8A")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<(Vector3 position, Quaternion rotation)> _003C_003E7__wrap1;

		[Token(Token = "0x170001A0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D41")]
			[Address(RVA = "0x4468D20", Offset = "0x4468D20", VA = "0x4468D20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001A1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D43")]
			[Address(RVA = "0x4468D70", Offset = "0x4468D70", VA = "0x4468D70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D3D")]
		[Address(RVA = "0x4462DC0", Offset = "0x4462DC0", VA = "0x4462DC0")]
		[DebuggerHidden]
		public _003CSpawnAITitansCoroutine_003Ed__75(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D3E")]
		[Address(RVA = "0x4468670", Offset = "0x4468670", VA = "0x4468670", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D3F")]
		[Address(RVA = "0x4468720", Offset = "0x4468720", VA = "0x4468720", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D40")]
		[Address(RVA = "0x4468C80", Offset = "0x4468C80", VA = "0x4468C80")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000D42")]
		[Address(RVA = "0x4468D30", Offset = "0x4468D30", VA = "0x4468D30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200021E")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEndGame_003Ed__88 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B8B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B8C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B8D")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x170001A2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D47")]
			[Address(RVA = "0x4468E50", Offset = "0x4468E50", VA = "0x4468E50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001A3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D49")]
			[Address(RVA = "0x4468EA0", Offset = "0x4468EA0", VA = "0x4468EA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D44")]
		[Address(RVA = "0x4464000", Offset = "0x4464000", VA = "0x4464000")]
		[DebuggerHidden]
		public _003CWaitAndEndGame_003Ed__88(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x4468D80", Offset = "0x4468D80", VA = "0x4468D80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x4468D90", Offset = "0x4468D90", VA = "0x4468D90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x4468E60", Offset = "0x4468E60", VA = "0x4468E60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200021F")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUnpauseGame_003Ed__44 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B8E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B8F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B90")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000B91")]
		[FieldOffset(Offset = "0x28")]
		private float _003CendTime_003E5__2;

		[Token(Token = "0x170001A4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000D4D")]
			[Address(RVA = "0x4468FD0", Offset = "0x4468FD0", VA = "0x4468FD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001A5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000D4F")]
			[Address(RVA = "0x4469020", Offset = "0x4469020", VA = "0x4469020", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x445B6B0", Offset = "0x445B6B0", VA = "0x445B6B0")]
		[DebuggerHidden]
		public _003CWaitAndUnpauseGame_003Ed__44(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x4468EB0", Offset = "0x4468EB0", VA = "0x4468EB0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x4468EC0", Offset = "0x4468EC0", VA = "0x4468EC0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x4468FE0", Offset = "0x4468FE0", VA = "0x4468FE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B43")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<string> BlueSpawnTags;

	[Token(Token = "0x4000B44")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<string> RedSpawnTags;

	[Token(Token = "0x4000B45")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<string> HumanSpawnTags;

	[Token(Token = "0x4000B46")]
	[FieldOffset(Offset = "0x28")]
	private SkyboxCustomSkinLoader _skyboxCustomSkinLoader;

	[Token(Token = "0x4000B47")]
	[FieldOffset(Offset = "0x30")]
	private GeneralInputSettings _generalInputSettings;

	[Token(Token = "0x4000B48")]
	[FieldOffset(Offset = "0x38")]
	private InGameMenu _inGameMenu;

	[Token(Token = "0x4000B49")]
	[FieldOffset(Offset = "0x40")]
	public HashSet<Human> Humans;

	[Token(Token = "0x4000B4A")]
	[FieldOffset(Offset = "0x48")]
	public HashSet<BasicTitan> Titans;

	[Token(Token = "0x4000B4B")]
	[FieldOffset(Offset = "0x50")]
	public HashSet<BaseShifter> Shifters;

	[Token(Token = "0x4000B4C")]
	[FieldOffset(Offset = "0x58")]
	public List<PhotonVoiceSync> PhotonVoiceSyncs;

	[Token(Token = "0x4000B4D")]
	[FieldOffset(Offset = "0x60")]
	public bool IsEnding;

	[Token(Token = "0x4000B4E")]
	[FieldOffset(Offset = "0x64")]
	public float EndTimeLeft;

	[Token(Token = "0x4000B4F")]
	[FieldOffset(Offset = "0x68")]
	public GameState State;

	[Token(Token = "0x4000B50")]
	[FieldOffset(Offset = "0x70")]
	public BaseCharacter CurrentCharacter;

	[Token(Token = "0x4000B51")]
	[FieldOffset(Offset = "0x78")]
	private bool _gameSettingsLoaded;

	[Token(Token = "0x4000B52")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<int, PlayerInfo> AllPlayerInfo;

	[Token(Token = "0x4000B53")]
	[FieldOffset(Offset = "0x20")]
	public static HashSet<int> MuteEmote;

	[Token(Token = "0x4000B54")]
	[FieldOffset(Offset = "0x28")]
	public static HashSet<int> MuteText;

	[Token(Token = "0x4000B55")]
	[FieldOffset(Offset = "0x30")]
	public static HashSet<int> MuteVoiceChat;

	[Token(Token = "0x4000B56")]
	[FieldOffset(Offset = "0x38")]
	public static Dictionary<int, float> VoiceChatVolumeMultiplier;

	[Token(Token = "0x4000B57")]
	[FieldOffset(Offset = "0x40")]
	public static PlayerInfo MyPlayerInfo;

	[Token(Token = "0x4000B59")]
	private const int MaxPlayerInfoRpcBytes = 16384;

	[Token(Token = "0x4000B5A")]
	[FieldOffset(Offset = "0x50")]
	private static bool _needSendPlayerInfo;

	[Token(Token = "0x4000B5B")]
	[FieldOffset(Offset = "0x79")]
	public bool HasSpawned;

	[Token(Token = "0x4000B5C")]
	[FieldOffset(Offset = "0x7A")]
	public bool GlobalPause;

	[Token(Token = "0x4000B5D")]
	[FieldOffset(Offset = "0x7B")]
	public bool Restarting;

	[Token(Token = "0x4000B5E")]
	[FieldOffset(Offset = "0x7C")]
	public float PauseTimeLeft;

	[Token(Token = "0x4000B5F")]
	[FieldOffset(Offset = "0x80")]
	public float RespawnTimeLeft;

	[Token(Token = "0x4000B60")]
	[FieldOffset(Offset = "0x88")]
	public HashSet<BaseDetection> Detections;

	[Token(Token = "0x4000B61")]
	[FieldOffset(Offset = "0x90")]
	private float pingUpdateInterval;

	[Token(Token = "0x4000B62")]
	[FieldOffset(Offset = "0x94")]
	private float timeSinceLastPingUpdate;

	[Token(Token = "0x14000002")]
	public static event Action<int> PlayerInfoUpdated
	{
		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x445A430", Offset = "0x445A430", VA = "0x445A430")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000CB6")]
		[Address(RVA = "0x445A530", Offset = "0x445A530", VA = "0x445A530")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000CB7")]
	[Address(RVA = "0x445A630", Offset = "0x445A630", VA = "0x445A630")]
	public void RegisterCharacter(BaseCharacter character)
	{
	}

	[Token(Token = "0x6000CB8")]
	[Address(RVA = "0x445A8A0", Offset = "0x445A8A0", VA = "0x445A8A0")]
	public HashSet<BaseCharacter> GetAllCharacters()
	{
		return null;
	}

	[Token(Token = "0x6000CB9")]
	[Address(RVA = "0x445B050", Offset = "0x445B050", VA = "0x445B050")]
	[IteratorStateMachine(typeof(_003CGetAllCharactersEnumerable_003Ed__36))]
	public IEnumerable<BaseCharacter> GetAllCharactersEnumerable()
	{
		return null;
	}

	[Token(Token = "0x6000CBA")]
	[Address(RVA = "0x445B100", Offset = "0x445B100", VA = "0x445B100")]
	public HashSet<BaseCharacter> GetAllNonAICharacters()
	{
		return null;
	}

	[Token(Token = "0x6000CBB")]
	[Address(RVA = "0x445B240", Offset = "0x445B240", VA = "0x445B240")]
	public void PauseGame()
	{
	}

	[Token(Token = "0x6000CBC")]
	[Address(RVA = "0x445B330", Offset = "0x445B330", VA = "0x445B330")]
	public void OnPauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CBD")]
	[Address(RVA = "0x445B370", Offset = "0x445B370", VA = "0x445B370")]
	public void UnpauseGame()
	{
	}

	[Token(Token = "0x6000CBE")]
	[Address(RVA = "0x445B460", Offset = "0x445B460", VA = "0x445B460")]
	public void OnUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CBF")]
	[Address(RVA = "0x445B4A0", Offset = "0x445B4A0", VA = "0x445B4A0")]
	public void StartUnpauseGame()
	{
	}

	[Token(Token = "0x6000CC0")]
	[Address(RVA = "0x445B590", Offset = "0x445B590", VA = "0x445B590")]
	public void OnStartUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CC1")]
	[Address(RVA = "0x445B640", Offset = "0x445B640", VA = "0x445B640")]
	[IteratorStateMachine(typeof(_003CWaitAndUnpauseGame_003Ed__44))]
	private IEnumerator WaitAndUnpauseGame()
	{
		return null;
	}

	[Token(Token = "0x6000CC2")]
	[Address(RVA = "0x445B6D0", Offset = "0x445B6D0", VA = "0x445B6D0")]
	public static void RestartGame()
	{
	}

	[Token(Token = "0x6000CC3")]
	[Address(RVA = "0x445B960", Offset = "0x445B960", VA = "0x445B960")]
	[IteratorStateMachine(typeof(_003CFinishRestartGame_003Ed__46))]
	private IEnumerator FinishRestartGame()
	{
		return null;
	}

	[Token(Token = "0x6000CC4")]
	[Address(RVA = "0x445B9D0", Offset = "0x445B9D0", VA = "0x445B9D0")]
	public static void OnRestartGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CC5")]
	[Address(RVA = "0x445BEA0", Offset = "0x445BEA0", VA = "0x445BEA0")]
	public static void OnPreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CC6")]
	[Address(RVA = "0x445A1E0", Offset = "0x445A1E0", VA = "0x445A1E0")]
	public static void LeaveRoom()
	{
	}

	[Token(Token = "0x6000CC7")]
	[Address(RVA = "0x445C530", Offset = "0x445C530", VA = "0x445C530", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000CC8")]
	[Address(RVA = "0x445C6F0", Offset = "0x445C6F0", VA = "0x445C6F0")]
	public static void OnJoinRoom()
	{
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x445CDF0", Offset = "0x445CDF0", VA = "0x445CDF0")]
	public void RegisterMainCharacterDie()
	{
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x445D320", Offset = "0x445D320", VA = "0x445D320")]
	public void RegisterMainCharacterKill(BaseCharacter victim)
	{
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x445D6D0", Offset = "0x445D6D0", VA = "0x445D6D0")]
	public void RegisterMainCharacterDamage(BaseCharacter victim, int damage)
	{
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x445DA50", Offset = "0x445DA50", VA = "0x445DA50", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x445DFF0", Offset = "0x445DFF0", VA = "0x445DFF0")]
	public void OnNotifyPlayerJoined(Player player)
	{
	}

	[Token(Token = "0x6000CCE")]
	[Address(RVA = "0x445E230", Offset = "0x445E230", VA = "0x445E230", Slot = "43")]
	public override void OnPlayerLeftRoom(Player player)
	{
	}

	[Token(Token = "0x6000CCF")]
	[Address(RVA = "0x445E820", Offset = "0x445E820", VA = "0x445E820", Slot = "32")]
	public override void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6000CD0")]
	[Address(RVA = "0x445EA80", Offset = "0x445EA80", VA = "0x445EA80")]
	public static void OnPlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CD1")]
	[Address(RVA = "0x445EFC0", Offset = "0x445EFC0", VA = "0x445EFC0")]
	public static void OnGameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CD2")]
	[Address(RVA = "0x445F460", Offset = "0x445F460", VA = "0x445F460")]
	public static void OnCharacterChosen()
	{
	}

	[Token(Token = "0x6000CD3")]
	[Address(RVA = "0x445F580", Offset = "0x445F580", VA = "0x445F580")]
	public static void OnLocalPlayerDied(Player player)
	{
	}

	[Token(Token = "0x6000CD4")]
	[Address(RVA = "0x445F4B0", Offset = "0x445F4B0", VA = "0x445F4B0")]
	private static void ResetRespawnTimeLeft()
	{
	}

	[Token(Token = "0x6000CD5")]
	[Address(RVA = "0x445F3E0", Offset = "0x445F3E0", VA = "0x445F3E0")]
	[IteratorStateMachine(typeof(_003CRespawnForever_003Ed__64))]
	private IEnumerator RespawnForever(float delay)
	{
		return null;
	}

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x445F600", Offset = "0x445F600", VA = "0x445F600")]
	public void SpawnPlayer(bool force)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x4461180", Offset = "0x4461180", VA = "0x4461180")]
	public void SpawnPlayerShifterAt(string shifterName, float liveTime, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x4461550", Offset = "0x4461550", VA = "0x4461550")]
	public InGameCharacterSettings GetSetHumanSettings()
	{
		return null;
	}

	[Token(Token = "0x6000CD9")]
	[Address(RVA = "0x445F8A0", Offset = "0x445F8A0", VA = "0x445F8A0")]
	public void SpawnPlayerAt(bool force, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6000CDA")]
	[Address(RVA = "0x4460D10", Offset = "0x4460D10", VA = "0x4460D10")]
	private (Vector3, Quaternion) GetHumanSpawnPoint()
	{
		return default((Vector3, Quaternion));
	}

	[Token(Token = "0x6000CDB")]
	[Address(RVA = "0x4460FD0", Offset = "0x4460FD0", VA = "0x4460FD0")]
	private (Vector3, Quaternion) GetTitanSpawnPoint()
	{
		return default((Vector3, Quaternion));
	}

	[Token(Token = "0x6000CDC")]
	[Address(RVA = "0x4461440", Offset = "0x4461440", VA = "0x4461440")]
	private string GetPlayerTeam(bool titan)
	{
		return null;
	}

	[Token(Token = "0x6000CDD")]
	[Address(RVA = "0x44621A0", Offset = "0x44621A0", VA = "0x44621A0")]
	public BasicTitan SpawnAITitan(string type)
	{
		return null;
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x44627B0", Offset = "0x44627B0", VA = "0x44627B0")]
	public IEnumerable<BasicTitan> SpawnAITitans(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x4462C90", Offset = "0x4462C90", VA = "0x4462C90")]
	public void SpawnAITitansAsync(string type, int count)
	{
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x4462D30", Offset = "0x4462D30", VA = "0x4462D30")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansCoroutine_003Ed__75))]
	private IEnumerator SpawnAITitansCoroutine(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x4462DE0", Offset = "0x4462DE0", VA = "0x4462DE0")]
	public void SpawnAITitansAtAsync(string type, int count, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x4462EB0", Offset = "0x4462EB0", VA = "0x4462EB0")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansAtCoroutine_003Ed__77))]
	private IEnumerator SpawnAITitansAtCoroutine(string type, int count, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x44628B0", Offset = "0x44628B0", VA = "0x44628B0")]
	private IEnumerable<(Vector3, Quaternion)> GetTitanSpawnPositions(int count)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x4462220", Offset = "0x4462220", VA = "0x4462220")]
	public BasicTitan SpawnAITitanAt(string type, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x4461F60", Offset = "0x4461F60", VA = "0x4461F60")]
	public void SetupTitan(BasicTitan titan, bool ai = true)
	{
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x4462FA0", Offset = "0x4462FA0", VA = "0x4462FA0")]
	public BaseShifter SpawnAIShifter(string type)
	{
		return null;
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x4463020", Offset = "0x4463020", VA = "0x4463020")]
	public BaseShifter SpawnAIShifterAt(string type, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x4463350", Offset = "0x4463350", VA = "0x4463350")]
	public Human SpawnAIHuman(int costume, string costumeName, string loadout)
	{
		return null;
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x44633E0", Offset = "0x44633E0", VA = "0x44633E0")]
	public Human SpawnAIHumanAt(int costume, string costumeName, string loadout, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x4463B40", Offset = "0x4463B40", VA = "0x4463B40")]
	public static void OnSetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x4463BF0", Offset = "0x4463BF0", VA = "0x4463BF0")]
	public static void SetLabel(string label, string message, float time = 0f)
	{
	}

	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x4463CF0", Offset = "0x4463CF0", VA = "0x4463CF0")]
	public void EndGame(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000CED")]
	[Address(RVA = "0x4463F90", Offset = "0x4463F90", VA = "0x4463F90")]
	[IteratorStateMachine(typeof(_003CWaitAndEndGame_003Ed__88))]
	private IEnumerator WaitAndEndGame(float time)
	{
		return null;
	}

	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x445C000", Offset = "0x445C000", VA = "0x445C000")]
	private static void ResetPersistentPlayerProperties()
	{
	}

	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x4464020", Offset = "0x4464020", VA = "0x4464020")]
	public static void ResetPlayerKD(Player player)
	{
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x445BB40", Offset = "0x445BB40", VA = "0x445BB40")]
	private static void ResetRoundPlayerProperties()
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x4461AF0", Offset = "0x4461AF0", VA = "0x4461AF0")]
	public static void UpdatePlayerName()
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x44641D0", Offset = "0x44641D0", VA = "0x44641D0")]
	public static void SyncLocalProfileToPlayerInfo(string reason)
	{
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x445CFC0", Offset = "0x445CFC0", VA = "0x445CFC0")]
	public static void UpdateRoundPlayerProperties()
	{
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x445CB10", Offset = "0x445CB10", VA = "0x445CB10")]
	private static void ResetPlayerInfo()
	{
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x445DF40", Offset = "0x445DF40", VA = "0x445DF40")]
	private static byte[] SerializeMyPlayerInfo()
	{
		return null;
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x445EF30", Offset = "0x445EF30", VA = "0x445EF30")]
	private static void NotifyPlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x445F2A0", Offset = "0x445F2A0", VA = "0x445F2A0")]
	private static void PrintMOTD(string original)
	{
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x44646F0", Offset = "0x44646F0", VA = "0x44646F0", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x4464870", Offset = "0x4464870", VA = "0x4464870", Slot = "55")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x4465300", Offset = "0x4465300", VA = "0x4465300", Slot = "56")]
	public override bool IsFinishedLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x4465330", Offset = "0x4465330", VA = "0x4465330")]
	private void Update()
	{
	}

	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x4465A20", Offset = "0x4465A20", VA = "0x4465A20", Slot = "57")]
	protected override void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x4465470", Offset = "0x4465470", VA = "0x4465470")]
	private void UpdateInput()
	{
	}

	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x4466030", Offset = "0x4466030", VA = "0x4466030")]
	public void OnSongChange()
	{
	}

	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x4466130", Offset = "0x4466130", VA = "0x4466130")]
	private void TakePreviewScreenshot()
	{
	}

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x4465920", Offset = "0x4465920", VA = "0x4465920")]
	private void UpdateCleanCharacters()
	{
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x4464E30", Offset = "0x4464E30", VA = "0x4464E30")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x44663D0", Offset = "0x44663D0", VA = "0x44663D0")]
	[IteratorStateMachine(typeof(_003COnLoadSkyboxRPC_003Ed__109))]
	public IEnumerator OnLoadSkyboxRPC(string[] urls)
	{
		return null;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x4466470", Offset = "0x4466470", VA = "0x4466470")]
	[IteratorStateMachine(typeof(_003CReloadSkybox_003Ed__110))]
	protected IEnumerator ReloadSkybox()
	{
		return null;
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x44664E0", Offset = "0x44664E0", VA = "0x44664E0")]
	[IteratorStateMachine(typeof(_003COnLoadLevelSkinRPC_003Ed__111))]
	public IEnumerator OnLoadLevelSkinRPC(string indices, string urls1, string urls2)
	{
		return null;
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x4466550", Offset = "0x4466550", VA = "0x4466550")]
	private bool IsValidSkybox(string[] urls)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x4466600", Offset = "0x4466600", VA = "0x4466600")]
	public InGameManager()
	{
	}
}
