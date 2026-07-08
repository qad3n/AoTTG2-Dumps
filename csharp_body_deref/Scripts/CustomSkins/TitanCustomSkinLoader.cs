using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x200021A")]
internal class TitanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200021B")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000BCC")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000BCD")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000BCE")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4000BCF")]
		[FieldOffset(Offset = "0x28")]
		public TitanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000BD0")]
		[FieldOffset(Offset = "0x30")]
		private string _003CeyeUrl_003E5__2;

		[Token(Token = "0x17000168")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000CA6")]
			[Address(RVA = "0x41461D0", Offset = "0x41461D0", VA = "0x41461D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000169")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CA8")]
			[Address(RVA = "0x4146220", Offset = "0x4146220", VA = "0x4146220", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x4145AA0", Offset = "0x4145AA0", VA = "0x4145AA0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000CA4")]
		[Address(RVA = "0x4145DC0", Offset = "0x4145DC0", VA = "0x4145DC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000CA5")]
		[Address(RVA = "0x4145DD0", Offset = "0x4145DD0", VA = "0x4145DD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CA7")]
		[Address(RVA = "0x41461E0", Offset = "0x41461E0", VA = "0x41461E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000167")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000C9F")]
		[Address(RVA = "0x41459E0", Offset = "0x41459E0", VA = "0x41459E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x4145A10", Offset = "0x4145A10", VA = "0x4145A10", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x4145AC0", Offset = "0x4145AC0", VA = "0x4145AC0", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x4145D50", Offset = "0x4145D50", VA = "0x4145D50")]
	public TitanCustomSkinLoader()
	{
	}
}
