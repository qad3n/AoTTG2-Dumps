using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000207")]
internal class CityCustomSkinLoader : LevelCustomSkinLoader
{
	[Token(Token = "0x2000208")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B71")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B72")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B73")]
		[FieldOffset(Offset = "0x20")]
		public CityCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000B74")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4000B75")]
		[FieldOffset(Offset = "0x30")]
		private char[] _003CrandomIndices_003E5__2;

		[Token(Token = "0x4000B76")]
		[FieldOffset(Offset = "0x38")]
		private string[] _003ChouseUrls_003E5__3;

		[Token(Token = "0x4000B77")]
		[FieldOffset(Offset = "0x40")]
		private string[] _003CmiscUrls_003E5__4;

		[Token(Token = "0x4000B78")]
		[FieldOffset(Offset = "0x48")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x4000B79")]
		[FieldOffset(Offset = "0x50")]
		private List<GameObject>.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x17000156")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C61")]
			[Address(RVA = "0x41417F0", Offset = "0x41417F0", VA = "0x41417F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000157")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C63")]
			[Address(RVA = "0x4141840", Offset = "0x4141840", VA = "0x4141840", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C5B")]
		[Address(RVA = "0x413FE00", Offset = "0x413FE00", VA = "0x413FE00")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C5C")]
		[Address(RVA = "0x41407B0", Offset = "0x41407B0", VA = "0x41407B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C5D")]
		[Address(RVA = "0x4140860", Offset = "0x4140860", VA = "0x4140860", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C5E")]
		[Address(RVA = "0x4141730", Offset = "0x4141730", VA = "0x4141730")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000C5F")]
		[Address(RVA = "0x4141770", Offset = "0x4141770", VA = "0x4141770")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6000C60")]
		[Address(RVA = "0x41417B0", Offset = "0x41417B0", VA = "0x41417B0")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x6000C62")]
		[Address(RVA = "0x4141800", Offset = "0x4141800", VA = "0x4141800", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000B6D")]
	[FieldOffset(Offset = "0x28")]
	private List<GameObject> _houseObjects;

	[Token(Token = "0x4000B6E")]
	[FieldOffset(Offset = "0x30")]
	private List<GameObject> _groundObjects;

	[Token(Token = "0x4000B6F")]
	[FieldOffset(Offset = "0x38")]
	private List<GameObject> _wallObjects;

	[Token(Token = "0x4000B70")]
	[FieldOffset(Offset = "0x40")]
	private List<GameObject> _gateObjects;

	[Token(Token = "0x17000155")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000C56")]
		[Address(RVA = "0x413FD50", Offset = "0x413FD50", VA = "0x413FD50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x413FD80", Offset = "0x413FD80", VA = "0x413FD80", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__6))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x413FE20", Offset = "0x413FE20", VA = "0x413FE20")]
	protected BaseCustomSkinPart GetCustomSkinPart(int partId, GameObject levelObject)
	{
		return null;
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x413FFE0", Offset = "0x413FFE0", VA = "0x413FFE0", Slot = "8")]
	protected override void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x4140610", Offset = "0x4140610", VA = "0x4140610")]
	public CityCustomSkinLoader()
	{
	}
}
