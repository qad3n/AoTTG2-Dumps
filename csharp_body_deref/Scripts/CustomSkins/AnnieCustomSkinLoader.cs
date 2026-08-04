// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.AnnieCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/AnnieCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/AnnieCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x2000239")]
internal class AnnieCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200023A")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C3A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C3B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C3C")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4000C3D")]
		[FieldOffset(Offset = "0x28")]
		public AnnieCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x170001A9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000DDE")]
			[Address(RVA = "0x4473B40", Offset = "0x4473B40", VA = "0x4473B40", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001AA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000DE0")]
			[Address(RVA = "0x4473B90", Offset = "0x4473B90", VA = "0x4473B90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000DDB")]
		[Address(RVA = "0x4473720", Offset = "0x4473720", VA = "0x4473720")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000DDC")]
		[Address(RVA = "0x4473A20", Offset = "0x4473A20", VA = "0x4473A20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000DDD")]
		[Address(RVA = "0x4473A30", Offset = "0x4473A30", VA = "0x4473A30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000DDF")]
		[Address(RVA = "0x4473B50", Offset = "0x4473B50", VA = "0x4473B50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x170001A8")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000DD7")]
		[Address(RVA = "0x4473660", Offset = "0x4473660", VA = "0x4473660", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x4473690", Offset = "0x4473690", VA = "0x4473690", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x4473740", Offset = "0x4473740", VA = "0x4473740", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x44739A0", Offset = "0x44739A0", VA = "0x44739A0")]
	public AnnieCustomSkinLoader()
	{
	}
}
