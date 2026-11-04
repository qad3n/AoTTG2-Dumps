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

[Token(Token = "0x2000325")]
internal class InGameManager : BaseGameManager
{
	[Token(Token = "0x2000328")]
	[CompilerGenerated]
	private sealed class _003CFinishRestartGame_003Ed__49 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400104E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400104F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000226")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001425")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000227")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001427")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001422")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CFinishRestartGame_003Ed__49(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001423")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001424")]
		[Address(RVA = "0x1E77C30", Offset = "0x1E76230", VA = "0x181E77C30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001426")]
		[Address(RVA = "0x1E77E10", Offset = "0x1E76410", VA = "0x181E77E10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000329")]
	[CompilerGenerated]
	private sealed class _003CGetAllCharactersEnumerable_003Ed__39 : IEnumerable<BaseCharacter>, IEnumerable, IEnumerator<BaseCharacter>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001050")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001051")]
		[FieldOffset(Offset = "0x18")]
		private BaseCharacter _003C_003E2__current;

		[Token(Token = "0x4001052")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001053")]
		[FieldOffset(Offset = "0x28")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001054")]
		[FieldOffset(Offset = "0x30")]
		private HashSet<Human>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x4001055")]
		[FieldOffset(Offset = "0x48")]
		private HashSet<BasicTitan>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4001056")]
		[FieldOffset(Offset = "0x60")]
		private HashSet<BaseShifter>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4001057")]
		[FieldOffset(Offset = "0x78")]
		private HashSet<Horse>.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x17000228")]
		private BaseCharacter System_002ECollections_002EGeneric_002EIEnumerator_003CCharacters_002EBaseCharacter_003E_002ECurrent
		{
			[Token(Token = "0x600142F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000229")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001431")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001428")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetAllCharactersEnumerable_003Ed__39(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001429")]
		[Address(RVA = "0x1E785C0", Offset = "0x1E76BC0", VA = "0x181E785C0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600142A")]
		[Address(RVA = "0x1E77E50", Offset = "0x1E76450", VA = "0x181E77E50", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600142B")]
		[Address(RVA = "0x1E787D0", Offset = "0x1E76DD0", VA = "0x181E787D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600142C")]
		[Address(RVA = "0x1E78820", Offset = "0x1E76E20", VA = "0x181E78820")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x600142D")]
		[Address(RVA = "0x1E78870", Offset = "0x1E76E70", VA = "0x181E78870")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x600142E")]
		[Address(RVA = "0x1E788C0", Offset = "0x1E76EC0", VA = "0x181E788C0")]
		private void _003C_003Em__Finally4()
		{
		}

		[Token(Token = "0x6001430")]
		[Address(RVA = "0x1E78580", Offset = "0x1E76B80", VA = "0x181E78580", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001432")]
		[Address(RVA = "0x1E784E0", Offset = "0x1E76AE0", VA = "0x181E784E0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<BaseCharacter> System_002ECollections_002EGeneric_002EIEnumerable_003CCharacters_002EBaseCharacter_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001433")]
		[Address(RVA = "0x1E784E0", Offset = "0x1E76AE0", VA = "0x181E784E0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200032A")]
	[CompilerGenerated]
	private sealed class _003COnLoadLevelSkinRPC_003Ed__114 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001058")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001059")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700022A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001437")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700022B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001439")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001434")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003COnLoadLevelSkinRPC_003Ed__114(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001435")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001436")]
		[Address(RVA = "0x18BE990", Offset = "0x18BCF90", VA = "0x1818BE990", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001438")]
		[Address(RVA = "0x1E7A780", Offset = "0x1E78D80", VA = "0x181E7A780", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200032B")]
	[CompilerGenerated]
	private sealed class _003COnLoadSkyboxRPC_003Ed__112 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400105A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400105B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400105C")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x400105D")]
		[FieldOffset(Offset = "0x28")]
		public string[] urls;

		[Token(Token = "0x1700022C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600143D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700022D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600143F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600143A")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003COnLoadSkyboxRPC_003Ed__112(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600143B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600143C")]
		[Address(RVA = "0x1E7A7C0", Offset = "0x1E78DC0", VA = "0x181E7A7C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600143E")]
		[Address(RVA = "0x1E7ABB0", Offset = "0x1E791B0", VA = "0x181E7ABB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200032C")]
	[CompilerGenerated]
	private sealed class _003CReloadSkybox_003Ed__113 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400105E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400105F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700022E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001443")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700022F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001445")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001440")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CReloadSkybox_003Ed__113(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001441")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001442")]
		[Address(RVA = "0x1E7ABF0", Offset = "0x1E791F0", VA = "0x181E7ABF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001444")]
		[Address(RVA = "0x1E7ADB0", Offset = "0x1E793B0", VA = "0x181E7ADB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200032D")]
	[CompilerGenerated]
	private sealed class _003CRespawnForever_003Ed__67 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001060")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001061")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001062")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001063")]
		[FieldOffset(Offset = "0x28")]
		public float delay;

		[Token(Token = "0x17000230")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001449")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000231")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600144B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001446")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRespawnForever_003Ed__67(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001447")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001448")]
		[Address(RVA = "0x1E7ADF0", Offset = "0x1E793F0", VA = "0x181E7ADF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600144A")]
		[Address(RVA = "0x1E7AED0", Offset = "0x1E794D0", VA = "0x181E7AED0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200032E")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansAtCoroutine_003Ed__80 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001064")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001065")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001066")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001067")]
		[FieldOffset(Offset = "0x28")]
		public string type;

		[Token(Token = "0x4001068")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x4001069")]
		[FieldOffset(Offset = "0x3C")]
		public float rotationY;

		[Token(Token = "0x400106A")]
		[FieldOffset(Offset = "0x40")]
		public int count;

		[Token(Token = "0x400106B")]
		[FieldOffset(Offset = "0x44")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000232")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600144F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000233")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001451")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600144C")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSpawnAITitansAtCoroutine_003Ed__80(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600144D")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600144E")]
		[Address(RVA = "0x1E7AF10", Offset = "0x1E79510", VA = "0x181E7AF10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001450")]
		[Address(RVA = "0x1E7B030", Offset = "0x1E79630", VA = "0x181E7B030", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200032F")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansCoroutine_003Ed__78 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400106C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400106D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400106E")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x400106F")]
		[FieldOffset(Offset = "0x28")]
		public int count;

		[Token(Token = "0x4001070")]
		[FieldOffset(Offset = "0x30")]
		public string type;

		[Token(Token = "0x4001071")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<(Vector3 position, Quaternion rotation)> _003C_003E7__wrap1;

		[Token(Token = "0x17000234")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001456")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000235")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001458")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001452")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSpawnAITitansCoroutine_003Ed__78(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001453")]
		[Address(RVA = "0x1E7B580", Offset = "0x1E79B80", VA = "0x181E7B580", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001454")]
		[Address(RVA = "0x1E7B070", Offset = "0x1E79670", VA = "0x181E7B070", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001455")]
		[Address(RVA = "0x1E7B5D0", Offset = "0x1E79BD0", VA = "0x181E7B5D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001457")]
		[Address(RVA = "0x1E7B540", Offset = "0x1E79B40", VA = "0x181E7B540", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000330")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEndGame_003Ed__91 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001072")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001073")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001074")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x17000236")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600145C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000237")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600145E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001459")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndEndGame_003Ed__91(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600145A")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600145B")]
		[Address(RVA = "0x1E7BE60", Offset = "0x1E7A460", VA = "0x181E7BE60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600145D")]
		[Address(RVA = "0x1E7BF30", Offset = "0x1E7A530", VA = "0x181E7BF30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000331")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUnpauseGame_003Ed__47 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001075")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001076")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001077")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001078")]
		[FieldOffset(Offset = "0x28")]
		private float _003CendTime_003E5__2;

		[Token(Token = "0x17000238")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001462")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000239")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001464")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600145F")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndUnpauseGame_003Ed__47(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001460")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001461")]
		[Address(RVA = "0x1E7BF70", Offset = "0x1E7A570", VA = "0x181E7BF70", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001463")]
		[Address(RVA = "0x1E7C090", Offset = "0x1E7A690", VA = "0x181E7C090", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001027")]
	[FieldOffset(Offset = "0x0")]
	private static bool _returnToMapEditorOnLeave;

	[Token(Token = "0x4001028")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<string> BlueSpawnTags;

	[Token(Token = "0x4001029")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<string> RedSpawnTags;

	[Token(Token = "0x400102A")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<string> HumanSpawnTags;

	[Token(Token = "0x400102B")]
	[FieldOffset(Offset = "0x28")]
	private SkyboxCustomSkinLoader _skyboxCustomSkinLoader;

	[Token(Token = "0x400102C")]
	[FieldOffset(Offset = "0x30")]
	private GeneralInputSettings _generalInputSettings;

	[Token(Token = "0x400102D")]
	[FieldOffset(Offset = "0x38")]
	private InGameMenu _inGameMenu;

	[Token(Token = "0x400102E")]
	[FieldOffset(Offset = "0x40")]
	public HashSet<Human> Humans;

	[Token(Token = "0x400102F")]
	[FieldOffset(Offset = "0x48")]
	public HashSet<BasicTitan> Titans;

	[Token(Token = "0x4001030")]
	[FieldOffset(Offset = "0x50")]
	public HashSet<BaseShifter> Shifters;

	[Token(Token = "0x4001031")]
	[FieldOffset(Offset = "0x58")]
	public HashSet<Horse> Horses;

	[Token(Token = "0x4001032")]
	[FieldOffset(Offset = "0x60")]
	public List<PhotonVoiceSync> PhotonVoiceSyncs;

	[Token(Token = "0x4001033")]
	[FieldOffset(Offset = "0x68")]
	public bool IsEnding;

	[Token(Token = "0x4001034")]
	[FieldOffset(Offset = "0x6C")]
	public float EndTimeLeft;

	[Token(Token = "0x4001035")]
	[FieldOffset(Offset = "0x70")]
	public GameState State;

	[Token(Token = "0x4001036")]
	[FieldOffset(Offset = "0x78")]
	public BaseCharacter CurrentCharacter;

	[Token(Token = "0x4001037")]
	[FieldOffset(Offset = "0x80")]
	private bool _gameSettingsLoaded;

	[Token(Token = "0x4001038")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<int, PlayerInfo> AllPlayerInfo;

	[Token(Token = "0x4001039")]
	[FieldOffset(Offset = "0x28")]
	public static HashSet<int> MuteEmote;

	[Token(Token = "0x400103A")]
	[FieldOffset(Offset = "0x30")]
	public static HashSet<int> MuteText;

	[Token(Token = "0x400103B")]
	[FieldOffset(Offset = "0x38")]
	public static HashSet<int> MuteVoiceChat;

	[Token(Token = "0x400103C")]
	[FieldOffset(Offset = "0x40")]
	public static Dictionary<int, float> VoiceChatVolumeMultiplier;

	[Token(Token = "0x400103D")]
	[FieldOffset(Offset = "0x48")]
	public static PlayerInfo MyPlayerInfo;

	[Token(Token = "0x400103E")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private static Action<int> m_PlayerInfoUpdated;

	[Token(Token = "0x400103F")]
	private const int MaxPlayerInfoRpcBytes = 16384;

	[Token(Token = "0x4001040")]
	[FieldOffset(Offset = "0x58")]
	private static bool _needSendPlayerInfo;

	[Token(Token = "0x4001041")]
	[FieldOffset(Offset = "0x81")]
	public bool HasSpawned;

	[Token(Token = "0x4001042")]
	[FieldOffset(Offset = "0x82")]
	public bool GlobalPause;

	[Token(Token = "0x4001043")]
	[FieldOffset(Offset = "0x83")]
	public bool Restarting;

	[Token(Token = "0x4001044")]
	[FieldOffset(Offset = "0x84")]
	public float PauseTimeLeft;

	[Token(Token = "0x4001045")]
	[FieldOffset(Offset = "0x88")]
	public float RespawnTimeLeft;

	[Token(Token = "0x4001046")]
	[FieldOffset(Offset = "0x90")]
	public HashSet<BaseDetection> Detections;

	[Token(Token = "0x4001047")]
	[FieldOffset(Offset = "0x98")]
	private float pingUpdateInterval;

	[Token(Token = "0x4001048")]
	[FieldOffset(Offset = "0x9C")]
	private float timeSinceLastPingUpdate;

	[Token(Token = "0x14000002")]
	public static event Action<int> PlayerInfoUpdated
	{
		[Token(Token = "0x60013C9")]
		[Address(RVA = "0x1E60100", Offset = "0x1E5E700", VA = "0x181E60100")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60013CA")]
		[Address(RVA = "0x1E60210", Offset = "0x1E5E810", VA = "0x181E60210")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x1E5D6A0", Offset = "0x1E5BCA0", VA = "0x181E5D6A0")]
	public static void StartMapEditorPlaytest()
	{
	}

	[Token(Token = "0x60013CB")]
	[Address(RVA = "0x1E585C0", Offset = "0x1E56BC0", VA = "0x181E585C0")]
	public void RegisterCharacter(BaseCharacter character)
	{
	}

	[Token(Token = "0x60013CC")]
	[Address(RVA = "0x1E53F50", Offset = "0x1E52550", VA = "0x181E53F50")]
	public HashSet<BaseCharacter> GetAllCharacters()
	{
		return null;
	}

	[Token(Token = "0x60013CD")]
	[Address(RVA = "0x1E53ED0", Offset = "0x1E524D0", VA = "0x181E53ED0")]
	[IteratorStateMachine(typeof(_003CGetAllCharactersEnumerable_003Ed__39))]
	public IEnumerable<BaseCharacter> GetAllCharactersEnumerable()
	{
		return null;
	}

	[Token(Token = "0x60013CE")]
	[Address(RVA = "0x1E54510", Offset = "0x1E52B10", VA = "0x181E54510")]
	public HashSet<BaseCharacter> GetAllNonAICharacters()
	{
		return null;
	}

	[Token(Token = "0x60013CF")]
	[Address(RVA = "0x1E583A0", Offset = "0x1E569A0", VA = "0x181E583A0")]
	public void PauseGame()
	{
	}

	[Token(Token = "0x60013D0")]
	[Address(RVA = "0x1E56F70", Offset = "0x1E55570", VA = "0x181E56F70")]
	public void OnPauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60013D1")]
	[Address(RVA = "0x1E5E430", Offset = "0x1E5CA30", VA = "0x181E5E430")]
	public void UnpauseGame()
	{
	}

	[Token(Token = "0x60013D2")]
	[Address(RVA = "0x1E58350", Offset = "0x1E56950", VA = "0x181E58350")]
	public void OnUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60013D3")]
	[Address(RVA = "0x1E5D6F0", Offset = "0x1E5BCF0", VA = "0x181E5D6F0")]
	public void StartUnpauseGame()
	{
	}

	[Token(Token = "0x60013D4")]
	[Address(RVA = "0x1E582A0", Offset = "0x1E568A0", VA = "0x181E582A0")]
	public void OnStartUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60013D5")]
	[Address(RVA = "0x1E5F720", Offset = "0x1E5DD20", VA = "0x181E5F720")]
	[IteratorStateMachine(typeof(_003CWaitAndUnpauseGame_003Ed__47))]
	private IEnumerator WaitAndUnpauseGame()
	{
		return null;
	}

	[Token(Token = "0x60013D6")]
	[Address(RVA = "0x1E5A2A0", Offset = "0x1E588A0", VA = "0x181E5A2A0")]
	public static void RestartGame()
	{
	}

	[Token(Token = "0x60013D7")]
	[Address(RVA = "0x1E53E80", Offset = "0x1E52480", VA = "0x181E53E80")]
	[IteratorStateMachine(typeof(_003CFinishRestartGame_003Ed__49))]
	private IEnumerator FinishRestartGame()
	{
		return null;
	}

	[Token(Token = "0x60013D8")]
	[Address(RVA = "0x1E57ED0", Offset = "0x1E564D0", VA = "0x181E57ED0")]
	public static void OnRestartGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60013D9")]
	[Address(RVA = "0x1E57D50", Offset = "0x1E56350", VA = "0x181E57D50")]
	public static void OnPreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60013DA")]
	[Address(RVA = "0x1E552F0", Offset = "0x1E538F0", VA = "0x181E552F0")]
	public static void LeaveRoom()
	{
	}

	[Token(Token = "0x60013DB")]
	[Address(RVA = "0x1E56880", Offset = "0x1E54E80", VA = "0x181E56880", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x60013DC")]
	[Address(RVA = "0x1E56460", Offset = "0x1E54A60", VA = "0x181E56460")]
	public static void OnJoinRoom()
	{
	}

	[Token(Token = "0x60013DD")]
	[Address(RVA = "0x1E58DD0", Offset = "0x1E573D0", VA = "0x181E58DD0")]
	public void RegisterMainCharacterDie()
	{
	}

	[Token(Token = "0x60013DE")]
	[Address(RVA = "0x1E58F80", Offset = "0x1E57580", VA = "0x181E58F80")]
	public void RegisterMainCharacterKill(BaseCharacter victim)
	{
	}

	[Token(Token = "0x60013DF")]
	[Address(RVA = "0x1E58950", Offset = "0x1E56F50", VA = "0x181E58950")]
	public void RegisterMainCharacterDamage(BaseCharacter victim, int damage)
	{
	}

	[Token(Token = "0x60013E0")]
	[Address(RVA = "0x1E56FC0", Offset = "0x1E555C0", VA = "0x181E56FC0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x60013E1")]
	[Address(RVA = "0x1E56D60", Offset = "0x1E55360", VA = "0x181E56D60")]
	public void OnNotifyPlayerJoined(Player player)
	{
	}

	[Token(Token = "0x60013E2")]
	[Address(RVA = "0x1E57740", Offset = "0x1E55D40", VA = "0x181E57740", Slot = "43")]
	public override void OnPlayerLeftRoom(Player player)
	{
	}

	[Token(Token = "0x60013E3")]
	[Address(RVA = "0x1E56B00", Offset = "0x1E55100", VA = "0x181E56B00", Slot = "32")]
	public override void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x1E573E0", Offset = "0x1E559E0", VA = "0x181E573E0")]
	public static void OnPlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60013E5")]
	[Address(RVA = "0x1E56140", Offset = "0x1E54740", VA = "0x181E56140")]
	public static void OnGameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60013E6")]
	[Address(RVA = "0x1E55AB0", Offset = "0x1E540B0", VA = "0x181E55AB0")]
	public static void OnCharacterChosen()
	{
	}

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x1E56AC0", Offset = "0x1E550C0", VA = "0x181E56AC0")]
	public static void OnLocalPlayerDied(Player player)
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x1E59DE0", Offset = "0x1E583E0", VA = "0x181E59DE0")]
	private static void ResetRespawnTimeLeft()
	{
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x1E5A220", Offset = "0x1E58820", VA = "0x181E5A220")]
	[IteratorStateMachine(typeof(_003CRespawnForever_003Ed__67))]
	private IEnumerator RespawnForever(float delay)
	{
		return null;
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x1E5D2E0", Offset = "0x1E5B8E0", VA = "0x181E5D2E0")]
	public void SpawnPlayer(bool force)
	{
	}

	[Token(Token = "0x60013EB")]
	[Address(RVA = "0x1E5CEA0", Offset = "0x1E5B4A0", VA = "0x181E5CEA0")]
	public void SpawnPlayerShifterAt(string shifterName, float liveTime, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x60013EC")]
	[Address(RVA = "0x1E54A40", Offset = "0x1E53040", VA = "0x181E54A40")]
	public InGameCharacterSettings GetSetHumanSettings()
	{
		return null;
	}

	[Token(Token = "0x60013ED")]
	[Address(RVA = "0x1E5BF60", Offset = "0x1E5A560", VA = "0x181E5BF60")]
	public void SpawnPlayerAt(bool force, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x60013EE")]
	[Address(RVA = "0x1E54650", Offset = "0x1E52C50", VA = "0x181E54650")]
	private (Vector3, Quaternion) GetHumanSpawnPoint()
	{
		return default((Vector3, Quaternion));
	}

	[Token(Token = "0x60013EF")]
	[Address(RVA = "0x1E54C70", Offset = "0x1E53270", VA = "0x181E54C70")]
	private (Vector3, Quaternion) GetTitanSpawnPoint()
	{
		return default((Vector3, Quaternion));
	}

	[Token(Token = "0x60013F0")]
	[Address(RVA = "0x1E54900", Offset = "0x1E52F00", VA = "0x181E54900")]
	private string GetPlayerTeam(bool titan)
	{
		return null;
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x1E5BB00", Offset = "0x1E5A100", VA = "0x181E5BB00")]
	public BasicTitan SpawnAITitan(string type)
	{
		return null;
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x1E5BE70", Offset = "0x1E5A470", VA = "0x181E5BE70")]
	public IEnumerable<BasicTitan> SpawnAITitans(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x60013F3")]
	[Address(RVA = "0x1E5BBF0", Offset = "0x1E5A1F0", VA = "0x181E5BBF0")]
	public void SpawnAITitansAsync(string type, int count)
	{
	}

	[Token(Token = "0x60013F4")]
	[Address(RVA = "0x1E5BDE0", Offset = "0x1E5A3E0", VA = "0x181E5BDE0")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansCoroutine_003Ed__78))]
	private IEnumerator SpawnAITitansCoroutine(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x1E5BC80", Offset = "0x1E5A280", VA = "0x181E5BC80")]
	public void SpawnAITitansAtAsync(string type, int count, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x1E5BD30", Offset = "0x1E5A330", VA = "0x181E5BD30")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansAtCoroutine_003Ed__80))]
	private IEnumerator SpawnAITitansAtCoroutine(string type, int count, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x1E54E00", Offset = "0x1E53400", VA = "0x181E54E00")]
	private IEnumerable<(Vector3, Quaternion)> GetTitanSpawnPositions(int count)
	{
		return null;
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x1E5B570", Offset = "0x1E59B70", VA = "0x181E5B570")]
	public BasicTitan SpawnAITitanAt(string type, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x1E5A6B0", Offset = "0x1E58CB0", VA = "0x181E5A6B0")]
	public void SetupTitan(BasicTitan titan, bool ai = true)
	{
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x1E5B480", Offset = "0x1E59A80", VA = "0x181E5B480")]
	public BaseShifter SpawnAIShifter(string type)
	{
		return null;
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x1E5B110", Offset = "0x1E59710", VA = "0x181E5B110")]
	public BaseShifter SpawnAIShifterAt(string type, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x1E5B010", Offset = "0x1E59610", VA = "0x181E5B010")]
	public Human SpawnAIHuman(int costume, string costumeName, string loadout)
	{
		return null;
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x1E5A990", Offset = "0x1E58F90", VA = "0x181E5A990")]
	public Human SpawnAIHumanAt(int costume, string costumeName, string loadout, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x1E58040", Offset = "0x1E56640", VA = "0x181E58040")]
	public static void OnSetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x1E5A5D0", Offset = "0x1E58BD0", VA = "0x181E5A5D0")]
	public static void SetLabel(string label, string message, float time = 0f)
	{
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x1E53C30", Offset = "0x1E52230", VA = "0x181E53C30")]
	public void EndGame(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x1E5F6B0", Offset = "0x1E5DCB0", VA = "0x181E5F6B0")]
	[IteratorStateMachine(typeof(_003CWaitAndEndGame_003Ed__91))]
	private IEnumerator WaitAndEndGame(float time)
	{
		return null;
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x1E59480", Offset = "0x1E57A80", VA = "0x181E59480")]
	private static void ResetPersistentPlayerProperties()
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x1E59C40", Offset = "0x1E58240", VA = "0x181E59C40")]
	public static void ResetPlayerKD(Player player)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x1E59EB0", Offset = "0x1E584B0", VA = "0x181E59EB0")]
	private static void ResetRoundPlayerProperties()
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x1E5ECA0", Offset = "0x1E5D2A0", VA = "0x181E5ECA0")]
	public static void UpdatePlayerName()
	{
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x1E5DDF0", Offset = "0x1E5C3F0", VA = "0x181E5DDF0")]
	public static void SyncLocalProfileToPlayerInfo(string reason)
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x1E5F0F0", Offset = "0x1E5D6F0", VA = "0x181E5F0F0")]
	public static void UpdateRoundPlayerProperties()
	{
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x1E599E0", Offset = "0x1E57FE0", VA = "0x181E599E0")]
	private static void ResetPlayerInfo()
	{
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x1E5A510", Offset = "0x1E58B10", VA = "0x181E5A510")]
	private static byte[] SerializeMyPlayerInfo()
	{
		return null;
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x1E55A40", Offset = "0x1E54040", VA = "0x181E55A40")]
	private static void NotifyPlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x1E58460", Offset = "0x1E56A60", VA = "0x181E58460")]
	private static void PrintMOTD(string original)
	{
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x1E53AA0", Offset = "0x1E520A0", VA = "0x181E53AA0", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x1E5D7B0", Offset = "0x1E5BDB0", VA = "0x181E5D7B0", Slot = "55")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x1E55200", Offset = "0x1E53800", VA = "0x181E55200", Slot = "56")]
	public override bool IsFinishedLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x1E5F470", Offset = "0x1E5DA70", VA = "0x181E5F470")]
	private void Update()
	{
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x1E55AF0", Offset = "0x1E540F0", VA = "0x181E55AF0", Slot = "57")]
	protected override void OnFinishLoading()
	{
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x1E5E610", Offset = "0x1E5CC10", VA = "0x181E5E610")]
	private void UpdateInput()
	{
	}

	[Token(Token = "0x6001412")]
	[Address(RVA = "0x1E58190", Offset = "0x1E56790", VA = "0x181E58190")]
	public void OnSongChange()
	{
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x1E5E1F0", Offset = "0x1E5C7F0", VA = "0x181E5E1F0")]
	private void TakePreviewScreenshot()
	{
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x1E5E4F0", Offset = "0x1E5CAF0", VA = "0x181E5E4F0")]
	private void UpdateCleanCharacters()
	{
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x1E55500", Offset = "0x1E53B00", VA = "0x181E55500")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x1E56A30", Offset = "0x1E55030", VA = "0x181E56A30")]
	[IteratorStateMachine(typeof(_003COnLoadSkyboxRPC_003Ed__112))]
	public IEnumerator OnLoadSkyboxRPC(string[] urls)
	{
		return null;
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x1E59430", Offset = "0x1E57A30", VA = "0x181E59430")]
	[IteratorStateMachine(typeof(_003CReloadSkybox_003Ed__113))]
	protected IEnumerator ReloadSkybox()
	{
		return null;
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x1E569E0", Offset = "0x1E54FE0", VA = "0x181E569E0")]
	[IteratorStateMachine(typeof(_003COnLoadLevelSkinRPC_003Ed__114))]
	public IEnumerator OnLoadLevelSkinRPC(string indices, string urls1, string urls2)
	{
		return null;
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x1E55230", Offset = "0x1E53830", VA = "0x181E55230")]
	private bool IsValidSkybox(string[] urls)
	{
		return default(bool);
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x1E5FF00", Offset = "0x1E5E500", VA = "0x181E5FF00")]
	public InGameManager()
	{
	}
}
