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

[Token(Token = "0x2000240")]
internal class ColossalCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000241")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C58")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C59")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C5A")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4000C5B")]
		[FieldOffset(Offset = "0x28")]
		public ColossalCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x170001B0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E04")]
			[Address(RVA = "0x3F8EE80", Offset = "0x3F8EE80", VA = "0x3F8EE80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001B1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E06")]
			[Address(RVA = "0x3F8EED0", Offset = "0x3F8EED0", VA = "0x3F8EED0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E01")]
		[Address(RVA = "0x3F8E8A0", Offset = "0x3F8E8A0", VA = "0x3F8E8A0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E02")]
		[Address(RVA = "0x3F8EB00", Offset = "0x3F8EB00", VA = "0x3F8EB00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E03")]
		[Address(RVA = "0x3F8EB10", Offset = "0x3F8EB10", VA = "0x3F8EB10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E05")]
		[Address(RVA = "0x3F8EE90", Offset = "0x3F8EE90", VA = "0x3F8EE90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x170001AF")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000DFD")]
		[Address(RVA = "0x3F8E7E0", Offset = "0x3F8E7E0", VA = "0x3F8E7E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DFE")]
	[Address(RVA = "0x3F8E810", Offset = "0x3F8E810", VA = "0x3F8E810", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000DFF")]
	[Address(RVA = "0x3F8E8C0", Offset = "0x3F8E8C0", VA = "0x3F8E8C0", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000E00")]
	[Address(RVA = "0x3F8EA90", Offset = "0x3F8EA90", VA = "0x3F8EA90")]
	public ColossalCustomSkinLoader()
	{
	}
}
