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

[Token(Token = "0x20001DD")]
internal class InGameManager : BaseGameManager
{
	[Token(Token = "0x20001E0")]
	[CompilerGenerated]
	private sealed class _003CFinishRestartGame_003Ed__42 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A8F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A90")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700013B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B7C")]
			[Address(RVA = "0x4132790", Offset = "0x4132790", VA = "0x4132790", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700013C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B7E")]
			[Address(RVA = "0x41327E0", Offset = "0x41327E0", VA = "0x41327E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B79")]
		[Address(RVA = "0x41325A0", Offset = "0x41325A0", VA = "0x41325A0")]
		[DebuggerHidden]
		public _003CFinishRestartGame_003Ed__42(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B7A")]
		[Address(RVA = "0x41325C0", Offset = "0x41325C0", VA = "0x41325C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B7B")]
		[Address(RVA = "0x41325D0", Offset = "0x41325D0", VA = "0x41325D0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B7D")]
		[Address(RVA = "0x41327A0", Offset = "0x41327A0", VA = "0x41327A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E1")]
	[CompilerGenerated]
	private sealed class _003CGetAllCharactersEnumerable_003Ed__32 : IEnumerable<BaseCharacter>, IEnumerable, IEnumerator<BaseCharacter>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A91")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A92")]
		[FieldOffset(Offset = "0x18")]
		private BaseCharacter _003C_003E2__current;

		[Token(Token = "0x4000A93")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000A94")]
		[FieldOffset(Offset = "0x28")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000A95")]
		[FieldOffset(Offset = "0x30")]
		private HashSet<Human>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x4000A96")]
		[FieldOffset(Offset = "0x48")]
		private HashSet<BasicTitan>.Enumerator _003C_003E7__wrap2;

		[Token(Token = "0x4000A97")]
		[FieldOffset(Offset = "0x60")]
		private HashSet<BaseShifter>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x1700013D")]
		private BaseCharacter System_002ECollections_002EGeneric_002EIEnumerator_003CCharacters_002EBaseCharacter_003E_002ECurrent
		{
			[Token(Token = "0x6000B85")]
			[Address(RVA = "0x4133000", Offset = "0x4133000", VA = "0x4133000", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700013E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B87")]
			[Address(RVA = "0x4133050", Offset = "0x4133050", VA = "0x4133050", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B7F")]
		[Address(RVA = "0x41327F0", Offset = "0x41327F0", VA = "0x41327F0")]
		[DebuggerHidden]
		public _003CGetAllCharactersEnumerable_003Ed__32(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B80")]
		[Address(RVA = "0x4132820", Offset = "0x4132820", VA = "0x4132820", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B81")]
		[Address(RVA = "0x4132910", Offset = "0x4132910", VA = "0x4132910", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B82")]
		[Address(RVA = "0x4132F40", Offset = "0x4132F40", VA = "0x4132F40")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000B83")]
		[Address(RVA = "0x4132F80", Offset = "0x4132F80", VA = "0x4132F80")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000B84")]
		[Address(RVA = "0x4132FC0", Offset = "0x4132FC0", VA = "0x4132FC0")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x6000B86")]
		[Address(RVA = "0x4133010", Offset = "0x4133010", VA = "0x4133010", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000B88")]
		[Address(RVA = "0x4133060", Offset = "0x4133060", VA = "0x4133060", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<BaseCharacter> System_002ECollections_002EGeneric_002EIEnumerable_003CCharacters_002EBaseCharacter_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000B89")]
		[Address(RVA = "0x4133100", Offset = "0x4133100", VA = "0x4133100", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x20001E2")]
	[CompilerGenerated]
	private sealed class _003COnLoadLevelSkinRPC_003Ed__104 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A98")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A99")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x1700013F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B8D")]
			[Address(RVA = "0x4133160", Offset = "0x4133160", VA = "0x4133160", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000140")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B8F")]
			[Address(RVA = "0x41331B0", Offset = "0x41331B0", VA = "0x41331B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B8A")]
		[Address(RVA = "0x4133110", Offset = "0x4133110", VA = "0x4133110")]
		[DebuggerHidden]
		public _003COnLoadLevelSkinRPC_003Ed__104(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B8B")]
		[Address(RVA = "0x4133130", Offset = "0x4133130", VA = "0x4133130", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B8C")]
		[Address(RVA = "0x4133140", Offset = "0x4133140", VA = "0x4133140", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B8E")]
		[Address(RVA = "0x4133170", Offset = "0x4133170", VA = "0x4133170", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E3")]
	[CompilerGenerated]
	private sealed class _003COnLoadSkyboxRPC_003Ed__102 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A9A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A9B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A9C")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000A9D")]
		[FieldOffset(Offset = "0x28")]
		public string[] urls;

		[Token(Token = "0x17000141")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B93")]
			[Address(RVA = "0x4133610", Offset = "0x4133610", VA = "0x4133610", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000142")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B95")]
			[Address(RVA = "0x4133660", Offset = "0x4133660", VA = "0x4133660", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B90")]
		[Address(RVA = "0x41331C0", Offset = "0x41331C0", VA = "0x41331C0")]
		[DebuggerHidden]
		public _003COnLoadSkyboxRPC_003Ed__102(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B91")]
		[Address(RVA = "0x41331E0", Offset = "0x41331E0", VA = "0x41331E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B92")]
		[Address(RVA = "0x41331F0", Offset = "0x41331F0", VA = "0x41331F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B94")]
		[Address(RVA = "0x4133620", Offset = "0x4133620", VA = "0x4133620", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E4")]
	[CompilerGenerated]
	private sealed class _003CReloadSkybox_003Ed__103 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A9E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A9F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000143")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B99")]
			[Address(RVA = "0x4133860", Offset = "0x4133860", VA = "0x4133860", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000144")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B9B")]
			[Address(RVA = "0x41338B0", Offset = "0x41338B0", VA = "0x41338B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B96")]
		[Address(RVA = "0x4133670", Offset = "0x4133670", VA = "0x4133670")]
		[DebuggerHidden]
		public _003CReloadSkybox_003Ed__103(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B97")]
		[Address(RVA = "0x4133690", Offset = "0x4133690", VA = "0x4133690", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B98")]
		[Address(RVA = "0x41336A0", Offset = "0x41336A0", VA = "0x41336A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000B9A")]
		[Address(RVA = "0x4133870", Offset = "0x4133870", VA = "0x4133870", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E5")]
	[CompilerGenerated]
	private sealed class _003CRespawnForever_003Ed__60 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AA0")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AA1")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AA2")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000AA3")]
		[FieldOffset(Offset = "0x28")]
		public float delay;

		[Token(Token = "0x17000145")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B9F")]
			[Address(RVA = "0x41339C0", Offset = "0x41339C0", VA = "0x41339C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000146")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BA1")]
			[Address(RVA = "0x4133A10", Offset = "0x4133A10", VA = "0x4133A10", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000B9C")]
		[Address(RVA = "0x41338C0", Offset = "0x41338C0", VA = "0x41338C0")]
		[DebuggerHidden]
		public _003CRespawnForever_003Ed__60(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x41338E0", Offset = "0x41338E0", VA = "0x41338E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x41338F0", Offset = "0x41338F0", VA = "0x41338F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BA0")]
		[Address(RVA = "0x41339D0", Offset = "0x41339D0", VA = "0x41339D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E6")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansAtCoroutine_003Ed__73 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AA4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AA5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AA6")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000AA7")]
		[FieldOffset(Offset = "0x28")]
		public string type;

		[Token(Token = "0x4000AA8")]
		[FieldOffset(Offset = "0x30")]
		public Vector3 position;

		[Token(Token = "0x4000AA9")]
		[FieldOffset(Offset = "0x3C")]
		public float rotationY;

		[Token(Token = "0x4000AAA")]
		[FieldOffset(Offset = "0x40")]
		public int count;

		[Token(Token = "0x4000AAB")]
		[FieldOffset(Offset = "0x44")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x17000147")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BA5")]
			[Address(RVA = "0x4133B60", Offset = "0x4133B60", VA = "0x4133B60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000148")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BA7")]
			[Address(RVA = "0x4133BB0", Offset = "0x4133BB0", VA = "0x4133BB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BA2")]
		[Address(RVA = "0x4133A20", Offset = "0x4133A20", VA = "0x4133A20")]
		[DebuggerHidden]
		public _003CSpawnAITitansAtCoroutine_003Ed__73(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BA3")]
		[Address(RVA = "0x4133A40", Offset = "0x4133A40", VA = "0x4133A40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BA4")]
		[Address(RVA = "0x4133A50", Offset = "0x4133A50", VA = "0x4133A50", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x4133B70", Offset = "0x4133B70", VA = "0x4133B70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E7")]
	[CompilerGenerated]
	private sealed class _003CSpawnAITitansCoroutine_003Ed__71 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AAC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AAD")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AAE")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000AAF")]
		[FieldOffset(Offset = "0x28")]
		public int count;

		[Token(Token = "0x4000AB0")]
		[FieldOffset(Offset = "0x30")]
		public string type;

		[Token(Token = "0x4000AB1")]
		[FieldOffset(Offset = "0x38")]
		private IEnumerator<(Vector3 position, Quaternion rotation)> _003C_003E7__wrap1;

		[Token(Token = "0x17000149")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BAC")]
			[Address(RVA = "0x41342A0", Offset = "0x41342A0", VA = "0x41342A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BAE")]
			[Address(RVA = "0x41342F0", Offset = "0x41342F0", VA = "0x41342F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BA8")]
		[Address(RVA = "0x4133BC0", Offset = "0x4133BC0", VA = "0x4133BC0")]
		[DebuggerHidden]
		public _003CSpawnAITitansCoroutine_003Ed__71(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BA9")]
		[Address(RVA = "0x4133BE0", Offset = "0x4133BE0", VA = "0x4133BE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BAA")]
		[Address(RVA = "0x4133C90", Offset = "0x4133C90", VA = "0x4133C90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BAB")]
		[Address(RVA = "0x4134200", Offset = "0x4134200", VA = "0x4134200")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000BAD")]
		[Address(RVA = "0x41342B0", Offset = "0x41342B0", VA = "0x41342B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndEndGame_003Ed__84 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AB2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AB3")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AB4")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x1700014B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BB2")]
			[Address(RVA = "0x41343F0", Offset = "0x41343F0", VA = "0x41343F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BB4")]
			[Address(RVA = "0x4134440", Offset = "0x4134440", VA = "0x4134440", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x4134300", Offset = "0x4134300", VA = "0x4134300")]
		[DebuggerHidden]
		public _003CWaitAndEndGame_003Ed__84(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BB0")]
		[Address(RVA = "0x4134320", Offset = "0x4134320", VA = "0x4134320", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BB1")]
		[Address(RVA = "0x4134330", Offset = "0x4134330", VA = "0x4134330", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BB3")]
		[Address(RVA = "0x4134400", Offset = "0x4134400", VA = "0x4134400", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001E9")]
	[CompilerGenerated]
	private sealed class _003CWaitAndUnpauseGame_003Ed__40 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AB5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AB6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AB7")]
		[FieldOffset(Offset = "0x20")]
		public InGameManager _003C_003E4__this;

		[Token(Token = "0x4000AB8")]
		[FieldOffset(Offset = "0x28")]
		private float _003CendTime_003E5__2;

		[Token(Token = "0x1700014D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BB8")]
			[Address(RVA = "0x41345A0", Offset = "0x41345A0", VA = "0x41345A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700014E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BBA")]
			[Address(RVA = "0x41345F0", Offset = "0x41345F0", VA = "0x41345F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000BB5")]
		[Address(RVA = "0x4134450", Offset = "0x4134450", VA = "0x4134450")]
		[DebuggerHidden]
		public _003CWaitAndUnpauseGame_003Ed__40(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000BB6")]
		[Address(RVA = "0x4134470", Offset = "0x4134470", VA = "0x4134470", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000BB7")]
		[Address(RVA = "0x4134480", Offset = "0x4134480", VA = "0x4134480", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x41345B0", Offset = "0x41345B0", VA = "0x41345B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<string> BlueSpawnTags;

	[Token(Token = "0x4000A6D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<string> RedSpawnTags;

	[Token(Token = "0x4000A6E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<string> HumanSpawnTags;

	[Token(Token = "0x4000A6F")]
	[FieldOffset(Offset = "0x28")]
	private SkyboxCustomSkinLoader _skyboxCustomSkinLoader;

	[Token(Token = "0x4000A70")]
	[FieldOffset(Offset = "0x30")]
	private GeneralInputSettings _generalInputSettings;

	[Token(Token = "0x4000A71")]
	[FieldOffset(Offset = "0x38")]
	private InGameMenu _inGameMenu;

	[Token(Token = "0x4000A72")]
	[FieldOffset(Offset = "0x40")]
	public HashSet<Human> Humans;

	[Token(Token = "0x4000A73")]
	[FieldOffset(Offset = "0x48")]
	public HashSet<BasicTitan> Titans;

	[Token(Token = "0x4000A74")]
	[FieldOffset(Offset = "0x50")]
	public HashSet<BaseShifter> Shifters;

	[Token(Token = "0x4000A75")]
	[FieldOffset(Offset = "0x58")]
	public List<PhotonVoiceSync> PhotonVoiceSyncs;

	[Token(Token = "0x4000A76")]
	[FieldOffset(Offset = "0x60")]
	public bool IsEnding;

	[Token(Token = "0x4000A77")]
	[FieldOffset(Offset = "0x64")]
	public float EndTimeLeft;

	[Token(Token = "0x4000A78")]
	[FieldOffset(Offset = "0x68")]
	public GameState State;

	[Token(Token = "0x4000A79")]
	[FieldOffset(Offset = "0x70")]
	public BaseCharacter CurrentCharacter;

	[Token(Token = "0x4000A7A")]
	[FieldOffset(Offset = "0x78")]
	private bool _gameSettingsLoaded;

	[Token(Token = "0x4000A7B")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<int, PlayerInfo> AllPlayerInfo;

	[Token(Token = "0x4000A7C")]
	[FieldOffset(Offset = "0x20")]
	public static HashSet<int> MuteEmote;

	[Token(Token = "0x4000A7D")]
	[FieldOffset(Offset = "0x28")]
	public static HashSet<int> MuteText;

	[Token(Token = "0x4000A7E")]
	[FieldOffset(Offset = "0x30")]
	public static HashSet<int> MuteVoiceChat;

	[Token(Token = "0x4000A7F")]
	[FieldOffset(Offset = "0x38")]
	public static Dictionary<int, float> VoiceChatVolumeMultiplier;

	[Token(Token = "0x4000A80")]
	[FieldOffset(Offset = "0x40")]
	public static PlayerInfo MyPlayerInfo;

	[Token(Token = "0x4000A81")]
	[FieldOffset(Offset = "0x48")]
	private static bool _needSendPlayerInfo;

	[Token(Token = "0x4000A82")]
	[FieldOffset(Offset = "0x79")]
	public bool HasSpawned;

	[Token(Token = "0x4000A83")]
	[FieldOffset(Offset = "0x7A")]
	public bool GlobalPause;

	[Token(Token = "0x4000A84")]
	[FieldOffset(Offset = "0x7B")]
	public bool Restarting;

	[Token(Token = "0x4000A85")]
	[FieldOffset(Offset = "0x7C")]
	public float PauseTimeLeft;

	[Token(Token = "0x4000A86")]
	[FieldOffset(Offset = "0x80")]
	public float RespawnTimeLeft;

	[Token(Token = "0x4000A87")]
	[FieldOffset(Offset = "0x88")]
	public HashSet<BaseDetection> Detections;

	[Token(Token = "0x4000A88")]
	[FieldOffset(Offset = "0x90")]
	private float pingUpdateInterval;

	[Token(Token = "0x4000A89")]
	[FieldOffset(Offset = "0x94")]
	private float timeSinceLastPingUpdate;

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x4126920", Offset = "0x4126920", VA = "0x4126920")]
	public void RegisterCharacter(BaseCharacter character)
	{
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x4126B90", Offset = "0x4126B90", VA = "0x4126B90")]
	public HashSet<BaseCharacter> GetAllCharacters()
	{
		return null;
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x4127340", Offset = "0x4127340", VA = "0x4127340")]
	[IteratorStateMachine(typeof(_003CGetAllCharactersEnumerable_003Ed__32))]
	public IEnumerable<BaseCharacter> GetAllCharactersEnumerable()
	{
		return null;
	}

	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x41273B0", Offset = "0x41273B0", VA = "0x41273B0")]
	public HashSet<BaseCharacter> GetAllNonAICharacters()
	{
		return null;
	}

	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x4116A20", Offset = "0x4116A20", VA = "0x4116A20")]
	public void PauseGame()
	{
	}

	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x41274F0", Offset = "0x41274F0", VA = "0x41274F0")]
	public void OnPauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x4127530", Offset = "0x4127530", VA = "0x4127530")]
	public void UnpauseGame()
	{
	}

	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x4127620", Offset = "0x4127620", VA = "0x4127620")]
	public void OnUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x4116BF0", Offset = "0x4116BF0", VA = "0x4116BF0")]
	public void StartUnpauseGame()
	{
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x4127660", Offset = "0x4127660", VA = "0x4127660")]
	public void OnStartUnpauseGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x4127700", Offset = "0x4127700", VA = "0x4127700")]
	[IteratorStateMachine(typeof(_003CWaitAndUnpauseGame_003Ed__40))]
	private IEnumerator WaitAndUnpauseGame()
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x4118550", Offset = "0x4118550", VA = "0x4118550")]
	public static void RestartGame()
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x4127770", Offset = "0x4127770", VA = "0x4127770")]
	[IteratorStateMachine(typeof(_003CFinishRestartGame_003Ed__42))]
	private IEnumerator FinishRestartGame()
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x41277B0", Offset = "0x41277B0", VA = "0x41277B0")]
	public static void OnRestartGameRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x4127C80", Offset = "0x4127C80", VA = "0x4127C80")]
	public static void OnPreRestartGameRPC(bool immediate, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x41266D0", Offset = "0x41266D0", VA = "0x41266D0")]
	public static void LeaveRoom()
	{
	}

	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x4128340", Offset = "0x4128340", VA = "0x4128340", Slot = "31")]
	public override void OnLeftRoom()
	{
	}

	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x4128500", Offset = "0x4128500", VA = "0x4128500")]
	public static void OnJoinRoom()
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x4128B10", Offset = "0x4128B10", VA = "0x4128B10")]
	public void RegisterMainCharacterDie()
	{
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x4129040", Offset = "0x4129040", VA = "0x4129040")]
	public void RegisterMainCharacterKill(BaseCharacter victim)
	{
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x41293F0", Offset = "0x41293F0", VA = "0x41293F0")]
	public void RegisterMainCharacterDamage(BaseCharacter victim, int damage)
	{
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x4129770", Offset = "0x4129770", VA = "0x4129770", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x4129C40", Offset = "0x4129C40", VA = "0x4129C40")]
	public void OnNotifyPlayerJoined(Player player)
	{
	}

	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x4129E50", Offset = "0x4129E50", VA = "0x4129E50", Slot = "43")]
	public override void OnPlayerLeftRoom(Player player)
	{
	}

	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x412A440", Offset = "0x412A440", VA = "0x412A440", Slot = "32")]
	public override void OnMasterClientSwitched(Player newMasterClient)
	{
	}

	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x412A6A0", Offset = "0x412A6A0", VA = "0x412A6A0")]
	public static void OnPlayerInfoRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x412A980", Offset = "0x412A980", VA = "0x412A980")]
	public static void OnGameSettingsRPC(byte[] data, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x412AE10", Offset = "0x412AE10", VA = "0x412AE10")]
	public static void OnCharacterChosen()
	{
	}

	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x412AF30", Offset = "0x412AF30", VA = "0x412AF30")]
	public static void OnLocalPlayerDied(Player player)
	{
	}

	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x412AE60", Offset = "0x412AE60", VA = "0x412AE60")]
	private static void ResetRespawnTimeLeft()
	{
	}

	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x412AD90", Offset = "0x412AD90", VA = "0x412AD90")]
	[IteratorStateMachine(typeof(_003CRespawnForever_003Ed__60))]
	private IEnumerator RespawnForever(float delay)
	{
		return null;
	}

	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x412AF90", Offset = "0x412AF90", VA = "0x412AF90")]
	public void SpawnPlayer(bool force)
	{
	}

	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x412CB10", Offset = "0x412CB10", VA = "0x412CB10")]
	public void SpawnPlayerShifterAt(string shifterName, float liveTime, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x412CEE0", Offset = "0x412CEE0", VA = "0x412CEE0")]
	public InGameCharacterSettings GetSetHumanSettings()
	{
		return null;
	}

	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x412B230", Offset = "0x412B230", VA = "0x412B230")]
	public void SpawnPlayerAt(bool force, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x412C6A0", Offset = "0x412C6A0", VA = "0x412C6A0")]
	private (Vector3, Quaternion) GetHumanSpawnPoint()
	{
		return default((Vector3, Quaternion));
	}

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x412C960", Offset = "0x412C960", VA = "0x412C960")]
	private (Vector3, Quaternion) GetTitanSpawnPoint()
	{
		return default((Vector3, Quaternion));
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x412CDD0", Offset = "0x412CDD0", VA = "0x412CDD0")]
	private string GetPlayerTeam(bool titan)
	{
		return null;
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x412DBA0", Offset = "0x412DBA0", VA = "0x412DBA0")]
	public BasicTitan SpawnAITitan(string type)
	{
		return null;
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x412E1B0", Offset = "0x412E1B0", VA = "0x412E1B0")]
	public IEnumerable<BasicTitan> SpawnAITitans(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x412E680", Offset = "0x412E680", VA = "0x412E680")]
	public void SpawnAITitansAsync(string type, int count)
	{
	}

	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x412E720", Offset = "0x412E720", VA = "0x412E720")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansCoroutine_003Ed__71))]
	private IEnumerator SpawnAITitansCoroutine(string type, int count)
	{
		return null;
	}

	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x412E7B0", Offset = "0x412E7B0", VA = "0x412E7B0")]
	public void SpawnAITitansAtAsync(string type, int count, Vector3 position, float rotationY)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x412E880", Offset = "0x412E880", VA = "0x412E880")]
	[IteratorStateMachine(typeof(_003CSpawnAITitansAtCoroutine_003Ed__73))]
	private IEnumerator SpawnAITitansAtCoroutine(string type, int count, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x412E2A0", Offset = "0x412E2A0", VA = "0x412E2A0")]
	private IEnumerable<(Vector3, Quaternion)> GetTitanSpawnPositions(int count)
	{
		return null;
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x412DC20", Offset = "0x412DC20", VA = "0x412DC20")]
	public BasicTitan SpawnAITitanAt(string type, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x412D960", Offset = "0x412D960", VA = "0x412D960")]
	public void SetupTitan(BasicTitan titan, bool ai = true)
	{
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x412E940", Offset = "0x412E940", VA = "0x412E940")]
	public BaseShifter SpawnAIShifter(string type)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x412E9C0", Offset = "0x412E9C0", VA = "0x412E9C0")]
	public BaseShifter SpawnAIShifterAt(string type, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x412ECF0", Offset = "0x412ECF0", VA = "0x412ECF0")]
	public Human SpawnAIHuman(int costume, string costumeName, string loadout)
	{
		return null;
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x412ED80", Offset = "0x412ED80", VA = "0x412ED80")]
	public Human SpawnAIHumanAt(int costume, string costumeName, string loadout, Vector3 position, float rotationY)
	{
		return null;
	}

	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x412F4E0", Offset = "0x412F4E0", VA = "0x412F4E0")]
	public static void OnSetLabelRPC(string label, string message, float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x412F590", Offset = "0x412F590", VA = "0x412F590")]
	public static void SetLabel(string label, string message, float time = 0f)
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x412F690", Offset = "0x412F690", VA = "0x412F690")]
	public void EndGame(float time, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x412F930", Offset = "0x412F930", VA = "0x412F930")]
	[IteratorStateMachine(typeof(_003CWaitAndEndGame_003Ed__84))]
	private IEnumerator WaitAndEndGame(float time)
	{
		return null;
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x4127DE0", Offset = "0x4127DE0", VA = "0x4127DE0")]
	private static void ResetPersistentPlayerProperties()
	{
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x4116D50", Offset = "0x4116D50", VA = "0x4116D50")]
	public static void ResetPlayerKD(Player player)
	{
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x4127920", Offset = "0x4127920", VA = "0x4127920")]
	private static void ResetRoundPlayerProperties()
	{
	}

	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x412D480", Offset = "0x412D480", VA = "0x412D480")]
	public static void UpdatePlayerName()
	{
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x4128CE0", Offset = "0x4128CE0", VA = "0x4128CE0")]
	public static void UpdateRoundPlayerProperties()
	{
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4128920", Offset = "0x4128920", VA = "0x4128920")]
	private static void ResetPlayerInfo()
	{
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x412AC50", Offset = "0x412AC50", VA = "0x412AC50")]
	private static void PrintMOTD(string original)
	{
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x412F9A0", Offset = "0x412F9A0", VA = "0x412F9A0", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x412FB10", Offset = "0x412FB10", VA = "0x412FB10", Slot = "55")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4130600", Offset = "0x4130600", VA = "0x4130600", Slot = "56")]
	public override bool IsFinishedLoading()
	{
		return default(bool);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x41306D0", Offset = "0x41306D0", VA = "0x41306D0")]
	private void Update()
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4130DC0", Offset = "0x4130DC0", VA = "0x4130DC0", Slot = "57")]
	protected override void OnFinishLoading()
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x4130810", Offset = "0x4130810", VA = "0x4130810")]
	private void UpdateInput()
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4131680", Offset = "0x4131680", VA = "0x4131680")]
	public void OnSongChange()
	{
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4131780", Offset = "0x4131780", VA = "0x4131780")]
	private void TakePreviewScreenshot()
	{
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x4130CC0", Offset = "0x4130CC0", VA = "0x4130CC0")]
	private void UpdateCleanCharacters()
	{
	}

	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x4130130", Offset = "0x4130130", VA = "0x4130130")]
	protected void LoadSkin()
	{
	}

	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x4131A20", Offset = "0x4131A20", VA = "0x4131A20")]
	[IteratorStateMachine(typeof(_003COnLoadSkyboxRPC_003Ed__102))]
	public IEnumerator OnLoadSkyboxRPC(string[] urls)
	{
		return null;
	}

	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x4131AA0", Offset = "0x4131AA0", VA = "0x4131AA0")]
	[IteratorStateMachine(typeof(_003CReloadSkybox_003Ed__103))]
	protected IEnumerator ReloadSkybox()
	{
		return null;
	}

	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x4131AE0", Offset = "0x4131AE0", VA = "0x4131AE0")]
	[IteratorStateMachine(typeof(_003COnLoadLevelSkinRPC_003Ed__104))]
	public IEnumerator OnLoadLevelSkinRPC(string indices, string urls1, string urls2)
	{
		return null;
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x4131B20", Offset = "0x4131B20", VA = "0x4131B20")]
	private bool IsValidSkybox(string[] urls)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x4131BD0", Offset = "0x4131BD0", VA = "0x4131BD0")]
	public InGameManager()
	{
	}
}
