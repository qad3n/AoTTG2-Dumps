using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x2000203")]
internal class AnnieCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000204")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B61")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B62")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B63")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4000B64")]
		[FieldOffset(Offset = "0x28")]
		public AnnieCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x17000152")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C45")]
			[Address(RVA = "0x413F4F0", Offset = "0x413F4F0", VA = "0x413F4F0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000153")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C47")]
			[Address(RVA = "0x413F540", Offset = "0x413F540", VA = "0x413F540", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x413ED90", Offset = "0x413ED90", VA = "0x413ED90")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C43")]
		[Address(RVA = "0x413F170", Offset = "0x413F170", VA = "0x413F170", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C44")]
		[Address(RVA = "0x413F180", Offset = "0x413F180", VA = "0x413F180", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C46")]
		[Address(RVA = "0x413F500", Offset = "0x413F500", VA = "0x413F500", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000151")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000C3E")]
		[Address(RVA = "0x413ECD0", Offset = "0x413ECD0", VA = "0x413ECD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x413ED00", Offset = "0x413ED00", VA = "0x413ED00", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x413EDB0", Offset = "0x413EDB0", VA = "0x413EDB0", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x413F0F0", Offset = "0x413F0F0", VA = "0x413F0F0")]
	public AnnieCustomSkinLoader()
	{
	}
}
