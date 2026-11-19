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

[Token(Token = "0x2000387")]
internal class InGameManager : BaseGameManager
{
	[Token(Token = "0x200038A")]
	[CompilerGenerated]
	private sealed class _003CFinishRestartGame_003Ed__58 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011FA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011FB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700026E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016A3")]
			[Address(RVA = "0x58495D0", Offset = "0x58485D0", VA = "0x58495D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700026F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016A5")]
			[Address(RVA = "0x5849620", Offset = "0x5848620", VA = "0x5849620", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016A0")]
		[Address(RVA = "0x583DB20", Offset = "0x583CB20", VA = "0x583DB20")]
		[DebuggerHidden]
		public _003CFinishRestartGame_003Ed__58(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016A1")]
		[Address(RVA = "0x5849400", Offset = "0x5848400", VA = "0x5849400", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016A2")]
		[Address(RVA = "0x5849410", Offset = "0x5848410", VA = "0x5849410", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016A4")]
		[Address(RVA = "0x58495E0", Offset = "0x58485E0", VA = "0x58495E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200038B")]
	[CompilerGenerated]
	private sealed class _003CGetAllCharactersEnumerable_003Ed__48 : IEnumerable<BaseCharacter>, IEnumerable, IEnumerator<BaseCharacter>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011FC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011FD")]
		[FieldOffset(Offset = "0x18")]
		private BaseCharacter _003C_003E2__current;

		[Token(Token = "0x40011FE")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40011FF")]
		[FieldOffset(Offset = "0x28")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001200")]
		[FieldOffset(Offset = "0x30")]
		private HashSet<Human>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x4001201")]
		[FieldOffset(Offset = "0x48")]
		private HashSet<BasicTitan>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4001202")]
		[FieldOffset(Offset = "0x60")]
		private HashSet<BaseShifter>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4001203")]
		[FieldOffset(Offset = "0x78")]
		private HashSet<Horse>.Enumerator _003C_003E7__wrap4;

		[Token(Token = "0x17000270")]
		private BaseCharacter System_002ECollections_002EGeneric_002EIEnumerator_003CCharacters_002EBaseCharacter_003E_002ECurrent
		{
			[Token(Token = "0x60016AD")]
			[Address(RVA = "0x5849F20", Offset = "0x5848F20", VA = "0x5849F20", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000271")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016AF")]
			[Address(RVA = "0x5849F70", Offset = "0x5848F70", VA = "0x5849F70", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016A6")]
		[Address(RVA = "0x583D260", Offset = "0x583C260", VA = "0x583D260")]
		[DebuggerHidden]
		public _003CGetAllCharactersEnumerable_003Ed__48(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016A7")]
		[Address(RVA = "0x5849630", Offset = "0x5848630", VA = "0x5849630", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016A8")]
		[Address(RVA = "0x5849740", Offset = "0x5848740", VA = "0x5849740", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016A9")]
		[Address(RVA = "0x5849E20", Offset = "0x5848E20", VA = "0x5849E20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60016AA")]
		[Address(RVA = "0x5849E60", Offset = "0x5848E60", VA = "0x5849E60")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60016AB")]
		[Address(RVA = "0x5849EA0", Offset = "0x5848EA0", VA = "0x5849EA0")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x60016AC")]
		[Address(RVA = "0x5849EE0", Offset = "0x5848EE0", VA = "0x5849EE0")]
		private void _003C_003Em__Finally4()
		{
		}

		[Token(Token = "0x60016AE")]
		[Address(RVA = "0x5849F30", Offset = "0x5848F30", VA = "0x5849F30", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60016B0")]
		[Address(RVA = "0x5849F80", Offset = "0x5848F80", VA = "0x5849F80", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<BaseCharacter> System_002ECollections_002EGeneric_002EIEnumerable_003CCharacters_002EBaseCharacter_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60016B1")]
		[Address(RVA = "0x584A020", Offset = "0x5849020", VA = "0x584A020", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x200038C")]
	[CompilerGenerated]
	private sealed class _003COnLoadSkyboxRPC_003Ed__126 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001204")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001205")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001206")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001207")]
		[FieldOffset(Offset = "0x28")]
		public string[] urls;

		[Token(Token = "0x17000272")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016B5")]
			[Address(RVA = "0x584A510", Offset = "0x5849510", VA = "0x584A510", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000273")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016B7")]
			[Address(RVA = "0x584A560", Offset = "0x5849560", VA = "0x584A560", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016B2")]
		[Address(RVA = "0x5848790", Offset = "0x5847790", VA = "0x5848790")]
		[DebuggerHidden]
		public _003COnLoadSkyboxRPC_003Ed__126(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016B3")]
		[Address(RVA = "0x584A030", Offset = "0x5849030", VA = "0x584A030", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016B4")]
		[Address(RVA = "0x584A040", Offset = "0x5849040", VA = "0x584A040", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016B6")]
		[Address(RVA = "0x584A520", Offset = "0x5849520", VA = "0x584A520", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200038D")]
	[CompilerGenerated]
	private sealed class _003CReloadSkybox_003Ed__127 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001208")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001209")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000274")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016BB")]
			[Address(RVA = "0x584A740", Offset = "0x5849740", VA = "0x584A740", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000275")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016BD")]
			[Address(RVA = "0x584A790", Offset = "0x5849790", VA = "0x584A790", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016B8")]
		[Address(RVA = "0x5848800", Offset = "0x5847800", VA = "0x5848800")]
		[DebuggerHidden]
		public _003CReloadSkybox_003Ed__127(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016B9")]
		[Address(RVA = "0x584A570", Offset = "0x5849570", VA = "0x584A570", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016BA")]
		[Address(RVA = "0x584A580", Offset = "0x5849580", VA = "0x584A580", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016BC")]
		[Address(RVA = "0x584A750", Offset = "0x5849750", VA = "0x584A750", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200038E")]
	[CompilerGenerated]
	private sealed class _003CRespawnForever_003Ed__77 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400120A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400120B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400120C")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x400120D")]
		[FieldOffset(Offset = "0x28")]
		public float delay;

		[Token(Token = "0x17000276")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016C1")]
			[Address(RVA = "0x584A880", Offset = "0x5849880", VA = "0x584A880", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000277")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016C3")]
			[Address(RVA = "0x584A8D0", Offset = "0x58498D0", VA = "0x584A8D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016BE")]
		[Address(RVA = "0x5841970", Offset = "0x5840970", VA = "0x5841970")]
		[DebuggerHidden]
		public _003CRespawnForever_003Ed__77(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016BF")]
		[Address(RVA = "0x584A7A0", Offset = "0x58497A0", VA = "0x584A7A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016C0")]
		[Address(RVA = "0x584A7B0", Offset = "0x58497B0", VA = "0x584A7B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016C2")]
		[Address(RVA = "0x584A890", Offset = "0x5849890", VA = "0x584A890", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200038F")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansAtCoroutine_003Ed__90 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400120E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400120F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001210")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001211")]
		[FieldOffset(Offset = "0x28")]
		public string type;

		[Token(Token = "0x4001212")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x4001213")]
		[FieldOffset(Offset = "0x3C")]
		public float rotationY;

		[Token(Token = "0x4001214")]
		[FieldOffset(Offset = "0x40")]
		public int count;

		[Token(Token = "0x4001215")]
		[FieldOffset(Offset = "0x44")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000278")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016C7")]
			[Address(RVA = "0x584AA00", Offset = "0x5849A00", VA = "0x584AA00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000279")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016C9")]
			[Address(RVA = "0x584AA50", Offset = "0x5849A50", VA = "0x584AA50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016C4")]
		[Address(RVA = "0x5844A80", Offset = "0x5843A80", VA = "0x5844A80")]
		[DebuggerHidden]
		public _003CSpawnAITitansAtCoroutine_003Ed__90(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016C5")]
		[Address(RVA = "0x584A8E0", Offset = "0x58498E0", VA = "0x584A8E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016C6")]
		[Address(RVA = "0x584A8F0", Offset = "0x58498F0", VA = "0x584A8F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016C8")]
		[Address(RVA = "0x584AA10", Offset = "0x5849A10", VA = "0x584AA10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000390")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansCoroutine_003Ed__88 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001216")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001217")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001218")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001219")]
		[FieldOffset(Offset = "0x28")]
		public int count;

		[Token(Token = "0x400121A")]
		[FieldOffset(Offset = "0x30")]
		public string type;

		[Token(Token = "0x400121B")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<(Vector3 position, Quaternion rotation)> _003C_003E7__wrap1;

		[Token(Token = "0x1700027A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016CE")]
			[Address(RVA = "0x584B040", Offset = "0x584A040", VA = "0x584B040", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700027B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016D0")]
			[Address(RVA = "0x584B090", Offset = "0x584A090", VA = "0x584B090", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016CA")]
		[Address(RVA = "0x58448E0", Offset = "0x58438E0", VA = "0x58448E0")]
		[DebuggerHidden]
		public _003CSpawnAITitansCoroutine_003Ed__88(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016CB")]
		[Address(RVA = "0x584AA60", Offset = "0x5849A60", VA = "0x584AA60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016CC")]
		[Address(RVA = "0x584AB10", Offset = "0x5849B10", VA = "0x584AB10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016CD")]
		[Address(RVA = "0x584AFA0", Offset = "0x5849FA0", VA = "0x584AFA0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60016CF")]
		[Address(RVA = "0x584B050", Offset = "0x584A050", VA = "0x584B050", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000391")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEndGame_003Ed__101 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400121C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400121D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400121E")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x1700027C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016D4")]
			[Address(RVA = "0x584B170", Offset = "0x584A170", VA = "0x584B170", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700027D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016D6")]
			[Address(RVA = "0x584B1C0", Offset = "0x584A1C0", VA = "0x584B1C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016D1")]
		[Address(RVA = "0x5845A30", Offset = "0x5844A30", VA = "0x5845A30")]
		[DebuggerHidden]
		public _003CWaitAndEndGame_003Ed__101(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016D2")]
		[Address(RVA = "0x584B0A0", Offset = "0x584A0A0", VA = "0x584B0A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016D3")]
		[Address(RVA = "0x584B0B0", Offset = "0x584A0B0", VA = "0x584B0B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016D5")]
		[Address(RVA = "0x584B180", Offset = "0x584A180", VA = "0x584B180", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000392")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUnpauseGame_003Ed__56 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400121F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001220")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001221")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4001222")]
		[FieldOffset(Offset = "0x28")]
		private float _003CendTime_003E5__2;

		[Token(Token = "0x1700027E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60016DA")]
			[Address(RVA = "0x584B300", Offset = "0x584A300", VA = "0x584B300", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700027F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60016DC")]
			[Address(RVA = "0x584B350", Offset = "0x584A350", VA = "0x584B350", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60016D7")]
		[Address(RVA = "0x583D820", Offset = "0x583C820", VA = "0x583D820")]
		[DebuggerHidden]
		public _003CWaitAndUnpauseGame_003Ed__56(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60016D8")]
		[Address(RVA = "0x584B1D0", Offset = "0x584A1D0", VA = "0x584B1D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60016D9")]
		[Address(RVA = "0x584B1E0", Offset = "0x584A1E0", VA = "0x584B1E0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60016DB")]
		[Address(RVA = "0x584B310", Offset = "0x584A310", VA = "0x584B310", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40011CD")]
	[FieldOffset(Offset = "0x0")]
	private static bool _returnToMapEditorOnLeave;

	[Token(Token = "0x40011CE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[] PrewarmEffects;

	[Token(Token = "0x40011CF")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<string> BlueSpawnTags;

	[Token(Token = "0x40011D0")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<string> RedSpawnTags;

	[Token(Token = "0x40011D1")]
	[FieldOffset(Offset = "0x20")]
	private static readonly List<string> HumanSpawnTags;

	[Token(Token = "0x40011D2")]
	[FieldOffset(Offset = "0x28")]
	private SkyboxCustomSkinLoader _skyboxCustomSkinLoader;

	[Token(Token = "0x40011D3")]
	[FieldOffset(Offset = "0x30")]
	private GeneralInputSettings _generalInputSettings;

	[Token(Token = "0x40011D4")]
	[FieldOffset(Offset = "0x38")]
	private InGameMenu _inGameMenu;

	[Token(Token = "0x40011D5")]
	[FieldOffset(Offset = "0x40")]
	public HashSet<Human> Humans;

	[Token(Token = "0x40011D6")]
	[FieldOffset(Offset = "0x48")]
	public HashSet<BasicTitan> Titans;

	[Token(Token = "0x40011D7")]
	[FieldOffset(Offset = "0x50")]
	public HashSet<BaseShifter> Shifters;

	[Token(Token = "0x40011D8")]
	[FieldOffset(Offset = "0x58")]
	public HashSet<Horse> Horses;

	[Token(Token = "0x40011D9")]
	private const int MaxSmartTitansPerHuman = 2;

	[Token(Token = "0x40011DA")]
	[FieldOffset(Offset = "0x60")]
	private readonly Dictionary<Human, int> _smartTitanCounts;

	[Token(Token = "0x40011DB")]
	[FieldOffset(Offset = "0x68")]
	public List<PhotonVoiceSync> PhotonVoiceSyncs;

	[Token(Token = "0x40011DC")]
	[FieldOffset(Offset = "0x70")]
	public bool IsEnding;

	[Token(Token = "0x40011DD")]
	[FieldOffset(Offset = "0x74")]
	public float EndTimeLeft;

	[Token(Token = "0x40011DE")]
	[FieldOffset(Offset = "0x78")]
	public GameState State;

	[Token(Token = "0x40011DF")]
	[FieldOffset(Offset = "0x80")]
	public BaseCharacter CurrentCharacter;

	[Token(Token = "0x40011E0")]
	[FieldOffset(Offset = "0x88")]
	private bool _gameSettingsLoaded;

	[Token(Token = "0x40011E1")]
	[FieldOffset(Offset = "0x89")]
	private bool _songPopupPending;

	[Token(Token = "0x40011E2")]
	[FieldOffset(Offset = "0x90")]
	private Coroutine _respawnForever;

	[Token(Token = "0x40011E3")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<int, PlayerInfo> AllPlayerInfo;

	[Token(Token = "0x40011E4")]
	[FieldOffset(Offset = "0x30")]
	public static HashSet<int> MuteEmote;

	[Token(Token = "0x40011E5")]
	[FieldOffset(Offset = "0x38")]
	public static HashSet<int> MuteText;

	[Token(Token = "0x40011E6")]
	[FieldOffset(Offset = "0x40")]
	public static HashSet<int> MuteVoiceChat;

	[Token(Token = "0x40011E7")]
	[FieldOffset(Offset = "0x48")]
	public static Dictionary<int, float> VoiceChatVolumeMultiplier;

	[Token(Token = "0x40011E8")]
	[FieldOffset(Offset = "0x50")]
	public static PlayerInfo MyPlayerInfo;

	[Token(Token = "0x40011E9")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private static Action<int> m_PlayerInfoUpdated;

	[Token(Token = "0x40011EA")]
	private const int MaxPlayerInfoRpcBytes = 16384;

	[Token(Token = "0x40011EB")]
	[FieldOffset(Offset = "0x60")]
	private static bool _needSendPlayerInfo;

	[Token(Token = "0x40011EC")]
	[FieldOffset(Offset = "0x98")]
	public bool HasSpawned;

	[Token(Token = "0x40011ED")]
	[FieldOffset(Offset = "0x99")]
	public bool GlobalPause;

	[Token(Token = "0x40011EE")]
	[FieldOffset(Offset = "0x9A")]
	public bool Restarting;

	[Token(Token = "0x40011F0")]
	[FieldOffset(Offset = "0x9C")]
	public float PauseTimeLeft;

	[Token(Token = "0x40011F1")]
	[FieldOffset(Offset = "0xA0")]
	public float RespawnTimeLeft;

	[Token(Token = "0x40011F2")]
	[FieldOffset(Offset = "0xA8")]
	public HashSet<BaseDetection> Detections;

	[Token(Token = "0x40011F3")]
	[FieldOffset(Offset = "0xB0")]
	private float pingUpdateInterval;

	[Token(Token = "0x40011F4")]
	[FieldOffset(Offset = "0xB4")]
	private float timeSinceLastPingUpdate;

	[Token(Token = "0x1700026D")]
	public bool TitanGoreEnabled
	{
		[Token(Token = "0x6001643")]
		[Address(RVA = "0x583C7A0", Offset = "0x583B7A0", VA = "0x583C7A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001644")]
		[Address(RVA = "0x583C7B0", Offset = "0x583B7B0", VA = "0x583C7B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public static event Action<int> PlayerInfoUpdated
	{
		[Token(Token = "0x6001641")]
		[Address(RVA = "0x583C5C0", Offset = "0x583B5C0", VA = "0x583C5C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6001642")]
		[Address(RVA = "0x583C6B0", Offset = "0x583B6B0", VA = "0x583C6B0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6001640")]
	[Address(RVA = "0x583C550", Offset = "0x583B550", VA = "0x583C550")]
	public static void StartMapEditorPlaytest()
	{
	}

	[Token(Token = "0x6001645")]
	[Address(RVA = "0x583C7C0", Offset = "0x583B7C0", VA = "0x583C7C0")]
	public void RegisterCharacter(BaseCharacter character)
	{
	}

	[Token(Token = "0x6001646")]
	[Address(RVA = "0x583CA80", Offset = "0x583BA80", VA = "0x583CA80")]
	public HashSet<BaseCharacter> GetAllCharacters()
	{
		return null;
	}

	[Token(Token = "0x6001647")]
	[Address(RVA = "0x583D1F0", Offset = "0x583C1F0", VA = "0x583D1F0")]
	[IteratorStateMachine(typeof(_003CGetAllCharactersEnumerable_003Ed__48))]
	public IEnumerable<BaseCharacter> GetAllCharactersEnumerable()
	{
		return null;
	}

	[Token(Token = "0x6001648")]
	[Address(RVA = "0x583D290", Offset = "0x583C290", VA = "0x583D290")]
	public HashSet<BaseCharacter> GetAllNonAICharacters()
	{
		return null;
	}

	[Token(Token = "0x6001649")]
	[Address(RVA = "0x583D3D0", Offset = "0x583C3D0", VA = "0x583D3D0")]
	public void PauseGame()
	{
	}

	[Token(Token = "0x600164A")]
	[Address(RVA = "0x583D4B0", Offset = "0x583C4B0", VA = "0x583D4B0")]
	public void OnPauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600164B")]
	[Address(RVA = "0x583D4F0", Offset = "0x583C4F0", VA = "0x583D4F0")]
	public void UnpauseGame()
	{
	}

	[Token(Token = "0x600164C")]
	[Address(RVA = "0x583D5D0", Offset = "0x583C5D0", VA = "0x583D5D0")]
	public void OnUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600164D")]
	[Address(RVA = "0x583D620", Offset = "0x583C620", VA = "0x583D620")]
	public void StartUnpauseGame()
	{
	}

	[Token(Token = "0x600164E")]
	[Address(RVA = "0x583D700", Offset = "0x583C700", VA = "0x583D700")]
	public void OnStartUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600164F")]
	[Address(RVA = "0x583D7B0", Offset = "0x583C7B0", VA = "0x583D7B0")]
	[IteratorStateMachine(typeof(_003CWaitAndUnpauseGame_003Ed__56))]
	private IEnumerator WaitAndUnpauseGame()
	{
		return null;
	}

	[Token(Token = "0x6001650")]
	[Address(RVA = "0x583D840", Offset = "0x583C840", VA = "0x583D840")]
	public static void RestartGame()
	{
	}

	[Token(Token = "0x6001651")]
	[Address(RVA = "0x583DAD0", Offset = "0x583CAD0", VA = "0x583DAD0")]
	[IteratorStateMachine(typeof(_003CFinishRestartGame_003Ed__58))]
	private IEnumerator FinishRestartGame()
	{
		return null;
	}

	[Token(Token = "0x6001652")]
	[Address(RVA = "0x583DB40", Offset = "0x583CB40", VA = "0x583DB40")]
	public static void OnRestartGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001653")]
	[Address(RVA = "0x583E020", Offset = "0x583D020", VA = "0x583E020")]
	public static void OnPreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001654")]
	[Address(RVA = "0x583C2D0", Offset = "0x583B2D0", VA = "0x583C2D0")]
	public static void LeaveRoom()
	{
	}

	[Token(Token = "0x6001655")]
	[Address(RVA = "0x583E6B0", Offset = "0x583D6B0", VA = "0x583E6B0", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x6001656")]
	[Address(RVA = "0x583E870", Offset = "0x583D870", VA = "0x583E870")]
	public static void OnJoinRoom()
	{
	}

	[Token(Token = "0x6001657")]
	[Address(RVA = "0x583EF70", Offset = "0x583DF70", VA = "0x583EF70")]
	public void RegisterMainCharacterDie()
	{
	}

	[Token(Token = "0x6001658")]
	[Address(RVA = "0x583F550", Offset = "0x583E550", VA = "0x583F550")]
	public void RegisterMainCharacterKill(BaseCharacter victim)
	{
	}

	[Token(Token = "0x6001659")]
	[Address(RVA = "0x583F930", Offset = "0x583E930", VA = "0x583F930")]
	public void RegisterMainCharacterDamage(BaseCharacter victim, int damage)
	{
	}

	[Token(Token = "0x600165A")]
	[Address(RVA = "0x583FD30", Offset = "0x583ED30", VA = "0x583FD30", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x600165B")]
	[Address(RVA = "0x5840220", Offset = "0x583F220", VA = "0x5840220")]
	public void OnNotifyPlayerJoined(Player player)
	{
	}

	[Token(Token = "0x600165C")]
	[Address(RVA = "0x5840450", Offset = "0x583F450", VA = "0x5840450", Slot = "43")]
	public override void OnPlayerLeftRoom(Player player)
	{
	}

	[Token(Token = "0x600165D")]
	[Address(RVA = "0x5840A50", Offset = "0x583FA50", VA = "0x5840A50", Slot = "32")]
	public override void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x600165E")]
	[Address(RVA = "0x5840CE0", Offset = "0x583FCE0", VA = "0x5840CE0")]
	private static void ResetContentSettings(InGameSet settings)
	{
	}

	[Token(Token = "0x600165F")]
	[Address(RVA = "0x5840E70", Offset = "0x583FE70", VA = "0x5840E70")]
	public static void OnPlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001660")]
	[Address(RVA = "0x5841330", Offset = "0x5840330", VA = "0x5841330")]
	public static void OnGameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001661")]
	[Address(RVA = "0x58417E0", Offset = "0x58407E0", VA = "0x58417E0")]
	public static void OnCharacterChosen()
	{
	}

	[Token(Token = "0x6001662")]
	[Address(RVA = "0x5841910", Offset = "0x5840910", VA = "0x5841910")]
	public static void OnLocalPlayerDied(Player player)
	{
	}

	[Token(Token = "0x6001663")]
	[Address(RVA = "0x5841840", Offset = "0x5840840", VA = "0x5841840")]
	private static void ResetRespawnTimeLeft()
	{
	}

	[Token(Token = "0x6001664")]
	[Address(RVA = "0x5841760", Offset = "0x5840760", VA = "0x5841760")]
	[IteratorStateMachine(typeof(_003CRespawnForever_003Ed__77))]
	private IEnumerator RespawnForever(float delay)
	{
		return null;
	}

	[Token(Token = "0x6001665")]
	[Address(RVA = "0x5841990", Offset = "0x5840990", VA = "0x5841990")]
	public void SpawnPlayer(bool force)
	{
	}

	[Token(Token = "0x6001666")]
	[Address(RVA = "0x5842FB0", Offset = "0x5841FB0", VA = "0x5842FB0")]
	public void SpawnPlayerShifterAt(string shifterName, float liveTime, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6001667")]
	[Address(RVA = "0x58433D0", Offset = "0x58423D0", VA = "0x58433D0")]
	public InGameCharacterSettings GetSetHumanSettings()
	{
		return null;
	}

	[Token(Token = "0x6001668")]
	[Address(RVA = "0x5841C30", Offset = "0x5840C30", VA = "0x5841C30")]
	public void SpawnPlayerAt(bool force, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6001669")]
	[Address(RVA = "0x5842B20", Offset = "0x5841B20", VA = "0x5842B20")]
	private (Vector3, Quaternion) GetHumanSpawnPoint()
	{
		return default((Vector3, Quaternion));
	}

	[Token(Token = "0x600166A")]
	[Address(RVA = "0x5842E00", Offset = "0x5841E00", VA = "0x5842E00")]
	private (Vector3, Quaternion) GetTitanSpawnPoint()
	{
		return default((Vector3, Quaternion));
	}

	[Token(Token = "0x600166B")]
	[Address(RVA = "0x58432C0", Offset = "0x58422C0", VA = "0x58432C0")]
	private string GetPlayerTeam(bool titan)
	{
		return null;
	}

	[Token(Token = "0x600166C")]
	[Address(RVA = "0x5843D00", Offset = "0x5842D00", VA = "0x5843D00")]
	public BasicTitan SpawnAITitan(string type)
	{
		return null;
	}

	[Token(Token = "0x600166D")]
	[Address(RVA = "0x58442F0", Offset = "0x58432F0", VA = "0x58442F0")]
	public IEnumerable<BasicTitan> SpawnAITitans(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x600166E")]
	[Address(RVA = "0x58447C0", Offset = "0x58437C0", VA = "0x58447C0")]
	public void SpawnAITitansAsync(string type, int count)
	{
	}

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x5844850", Offset = "0x5843850", VA = "0x5844850")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansCoroutine_003Ed__88))]
	private IEnumerator SpawnAITitansCoroutine(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x6001670")]
	[Address(RVA = "0x5844900", Offset = "0x5843900", VA = "0x5844900")]
	public void SpawnAITitansAtAsync(string type, int count, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6001671")]
	[Address(RVA = "0x58449C0", Offset = "0x58439C0", VA = "0x58449C0")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansAtCoroutine_003Ed__90))]
	private IEnumerator SpawnAITitansAtCoroutine(string type, int count, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6001672")]
	[Address(RVA = "0x58443F0", Offset = "0x58433F0", VA = "0x58443F0")]
	private IEnumerable<(Vector3, Quaternion)> GetTitanSpawnPositions(int count)
	{
		return null;
	}

	[Token(Token = "0x6001673")]
	[Address(RVA = "0x5843D80", Offset = "0x5842D80", VA = "0x5843D80")]
	public BasicTitan SpawnAITitanAt(string type, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6001674")]
	[Address(RVA = "0x5843A40", Offset = "0x5842A40", VA = "0x5843A40")]
	public void SetupTitan(BasicTitan titan, bool ai = true)
	{
	}

	[Token(Token = "0x6001675")]
	[Address(RVA = "0x5844AA0", Offset = "0x5843AA0", VA = "0x5844AA0")]
	public BaseShifter SpawnAIShifter(string type)
	{
		return null;
	}

	[Token(Token = "0x6001676")]
	[Address(RVA = "0x5844B20", Offset = "0x5843B20", VA = "0x5844B20")]
	public BaseShifter SpawnAIShifterAt(string type, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6001677")]
	[Address(RVA = "0x5844E60", Offset = "0x5843E60", VA = "0x5844E60")]
	public Human SpawnAIHuman(int costume, string costumeName, string loadout)
	{
		return null;
	}

	[Token(Token = "0x6001678")]
	[Address(RVA = "0x5844EF0", Offset = "0x5843EF0", VA = "0x5844EF0")]
	public Human SpawnAIHumanAt(int costume, string costumeName, string loadout, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6001679")]
	[Address(RVA = "0x58455A0", Offset = "0x58445A0", VA = "0x58455A0")]
	public static void OnSetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600167A")]
	[Address(RVA = "0x5845660", Offset = "0x5844660", VA = "0x5845660")]
	public static void SetLabel(string label, string message, float time = 0f)
	{
	}

	[Token(Token = "0x600167B")]
	[Address(RVA = "0x5845760", Offset = "0x5844760", VA = "0x5845760")]
	public void EndGame(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600167C")]
	[Address(RVA = "0x58459D0", Offset = "0x58449D0", VA = "0x58459D0")]
	[IteratorStateMachine(typeof(_003CWaitAndEndGame_003Ed__101))]
	private IEnumerator WaitAndEndGame(float time)
	{
		return null;
	}

	[Token(Token = "0x600167D")]
	[Address(RVA = "0x583E180", Offset = "0x583D180", VA = "0x583E180")]
	private static void ResetPersistentPlayerProperties()
	{
	}

	[Token(Token = "0x600167E")]
	[Address(RVA = "0x5845A50", Offset = "0x5844A50", VA = "0x5845A50")]
	public static void ResetPlayerKD(Player player)
	{
	}

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x583DCA0", Offset = "0x583CCA0", VA = "0x583DCA0")]
	private static void ResetRoundPlayerProperties()
	{
	}

	[Token(Token = "0x6001680")]
	[Address(RVA = "0x58435E0", Offset = "0x58425E0", VA = "0x58435E0")]
	public static void UpdatePlayerName()
	{
	}

	[Token(Token = "0x6001681")]
	[Address(RVA = "0x5845C00", Offset = "0x5844C00", VA = "0x5845C00")]
	public static void SyncLocalProfileToPlayerInfo(string reason)
	{
	}

	[Token(Token = "0x6001682")]
	[Address(RVA = "0x583F140", Offset = "0x583E140", VA = "0x583F140")]
	public static void UpdateRoundPlayerProperties()
	{
	}

	[Token(Token = "0x6001683")]
	[Address(RVA = "0x583ECA0", Offset = "0x583DCA0", VA = "0x583ECA0")]
	private static void ResetPlayerInfo()
	{
	}

	[Token(Token = "0x6001684")]
	[Address(RVA = "0x5840170", Offset = "0x583F170", VA = "0x5840170")]
	private static byte[] SerializeMyPlayerInfo()
	{
		return null;
	}

	[Token(Token = "0x6001685")]
	[Address(RVA = "0x58412A0", Offset = "0x58402A0", VA = "0x58412A0")]
	private static void NotifyPlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x6001686")]
	[Address(RVA = "0x5841630", Offset = "0x5840630", VA = "0x5841630")]
	private static void PrintMOTD(string original)
	{
	}

	[Token(Token = "0x6001687")]
	[Address(RVA = "0x58460B0", Offset = "0x58450B0", VA = "0x58460B0")]
	private void PrewarmAssets()
	{
	}

	[Token(Token = "0x6001688")]
	[Address(RVA = "0x5846250", Offset = "0x5845250", VA = "0x5846250", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6001689")]
	[Address(RVA = "0x5846410", Offset = "0x5845410", VA = "0x5846410", Slot = "55")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600168A")]
	[Address(RVA = "0x5846F20", Offset = "0x5845F20", VA = "0x5846F20", Slot = "56")]
	public override bool IsFinishedLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x600168B")]
	[Address(RVA = "0x5846F50", Offset = "0x5845F50", VA = "0x5846F50")]
	private void Update()
	{
	}

	[Token(Token = "0x600168C")]
	[Address(RVA = "0x58477D0", Offset = "0x58467D0", VA = "0x58477D0", Slot = "57")]
	protected override void OnFinishLoading()
	{
	}

	[Token(Token = "0x600168D")]
	[Address(RVA = "0x5847090", Offset = "0x5846090", VA = "0x5847090")]
	private void UpdateInput()
	{
	}

	[Token(Token = "0x600168E")]
	[Address(RVA = "0x5847E30", Offset = "0x5846E30", VA = "0x5847E30")]
	public void OnSongChange()
	{
	}

	[Token(Token = "0x600168F")]
	[Address(RVA = "0x5847F60", Offset = "0x5846F60", VA = "0x5847F60")]
	private void TakePreviewScreenshot()
	{
	}

	[Token(Token = "0x6001690")]
	[Address(RVA = "0x58481E0", Offset = "0x58471E0", VA = "0x58481E0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6001691")]
	[Address(RVA = "0x5848250", Offset = "0x5847250", VA = "0x5848250")]
	private void UpdateSmartTitans()
	{
	}

	[Token(Token = "0x6001692")]
	[Address(RVA = "0x58484C0", Offset = "0x58474C0", VA = "0x58484C0")]
	private void TryEnableSmartTitan(BaseTitan titan)
	{
	}

	[Token(Token = "0x6001693")]
	[Address(RVA = "0x5847690", Offset = "0x5846690", VA = "0x5847690")]
	private void UpdateCleanCharacters()
	{
	}

	[Token(Token = "0x6001694")]
	[Address(RVA = "0x5846A50", Offset = "0x5845A50", VA = "0x5846A50")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x6001695")]
	[Address(RVA = "0x5848710", Offset = "0x5847710", VA = "0x5848710")]
	[IteratorStateMachine(typeof(_003COnLoadSkyboxRPC_003Ed__126))]
	public IEnumerator OnLoadSkyboxRPC(string[] urls)
	{
		return null;
	}

	[Token(Token = "0x6001696")]
	[Address(RVA = "0x58487B0", Offset = "0x58477B0", VA = "0x58487B0")]
	[IteratorStateMachine(typeof(_003CReloadSkybox_003Ed__127))]
	protected IEnumerator ReloadSkybox()
	{
		return null;
	}

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x5848820", Offset = "0x5847820", VA = "0x5848820")]
	private bool IsValidSkybox(string[] urls)
	{
		return default(bool);
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x58488D0", Offset = "0x58478D0", VA = "0x58488D0")]
	public InGameManager()
	{
	}
}
