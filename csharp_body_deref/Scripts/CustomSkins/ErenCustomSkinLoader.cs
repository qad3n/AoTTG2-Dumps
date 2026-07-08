using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x200020D")]
internal class ErenCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200020E")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000B85")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000B86")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000B87")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4000B88")]
		[FieldOffset(Offset = "0x28")]
		public ErenCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x1700015C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000C75")]
			[Address(RVA = "0x4142050", Offset = "0x4142050", VA = "0x4142050", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700015D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000C77")]
			[Address(RVA = "0x41420A0", Offset = "0x41420A0", VA = "0x41420A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000C72")]
		[Address(RVA = "0x4141D50", Offset = "0x4141D50", VA = "0x4141D50")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000C73")]
		[Address(RVA = "0x4141EE0", Offset = "0x4141EE0", VA = "0x4141EE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000C74")]
		[Address(RVA = "0x4141EF0", Offset = "0x4141EF0", VA = "0x4141EF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000C76")]
		[Address(RVA = "0x4142060", Offset = "0x4142060", VA = "0x4142060", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x1700015B")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000C6E")]
		[Address(RVA = "0x4141C90", Offset = "0x4141C90", VA = "0x4141C90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x4141CC0", Offset = "0x4141CC0", VA = "0x4141CC0", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x4141D70", Offset = "0x4141D70", VA = "0x4141D70", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x4141E70", Offset = "0x4141E70", VA = "0x4141E70")]
	public ErenCustomSkinLoader()
	{
	}
}
