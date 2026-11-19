// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.ColossalCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/ColossalCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/ColossalCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x20003B9")]
internal class ColossalCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003BA")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001322")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001323")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001324")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4001325")]
		[FieldOffset(Offset = "0x28")]
		public ColossalCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x1700028A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017D6")]
			[Address(RVA = "0x585FD70", Offset = "0x585ED70", VA = "0x585FD70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700028B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017D8")]
			[Address(RVA = "0x585FDC0", Offset = "0x585EDC0", VA = "0x585FDC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017D3")]
		[Address(RVA = "0x585FA50", Offset = "0x585EA50", VA = "0x585FA50")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60017D4")]
		[Address(RVA = "0x585FC00", Offset = "0x585EC00", VA = "0x585FC00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60017D5")]
		[Address(RVA = "0x585FC10", Offset = "0x585EC10", VA = "0x585FC10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60017D7")]
		[Address(RVA = "0x585FD80", Offset = "0x585ED80", VA = "0x585FD80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000289")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017CF")]
		[Address(RVA = "0x585F9A0", Offset = "0x585E9A0", VA = "0x585F9A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017D0")]
	[Address(RVA = "0x585F9D0", Offset = "0x585E9D0", VA = "0x585F9D0", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x60017D1")]
	[Address(RVA = "0x585FA70", Offset = "0x585EA70", VA = "0x585FA70", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x60017D2")]
	[Address(RVA = "0x585FB90", Offset = "0x585EB90", VA = "0x585FB90")]
	public ColossalCustomSkinLoader()
	{
	}
}
