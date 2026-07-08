using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x200020A")]
internal class ColossalCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200020B")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B7F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B80")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B81")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4000B82")]
		[FieldOffset(Offset = "0x28")]
		public ColossalCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x17000159")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C6B")]
			[Address(RVA = "0x4141C30", Offset = "0x4141C30", VA = "0x4141C30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700015A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C6D")]
			[Address(RVA = "0x4141C80", Offset = "0x4141C80", VA = "0x4141C80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x4141910", Offset = "0x4141910", VA = "0x4141910")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C69")]
		[Address(RVA = "0x4141AC0", Offset = "0x4141AC0", VA = "0x4141AC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C6A")]
		[Address(RVA = "0x4141AD0", Offset = "0x4141AD0", VA = "0x4141AD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C6C")]
		[Address(RVA = "0x4141C40", Offset = "0x4141C40", VA = "0x4141C40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000158")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000C64")]
		[Address(RVA = "0x4141850", Offset = "0x4141850", VA = "0x4141850", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x4141880", Offset = "0x4141880", VA = "0x4141880", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x4141930", Offset = "0x4141930", VA = "0x4141930", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x4141A50", Offset = "0x4141A50", VA = "0x4141A50")]
	public ColossalCustomSkinLoader()
	{
	}
}
