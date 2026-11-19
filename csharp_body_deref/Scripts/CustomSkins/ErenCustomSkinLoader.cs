// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.ErenCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/ErenCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/ErenCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x20003BC")]
internal class ErenCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003BD")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001328")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001329")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400132A")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x400132B")]
		[FieldOffset(Offset = "0x28")]
		public ErenCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x1700028D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017E0")]
			[Address(RVA = "0x5860180", Offset = "0x585F180", VA = "0x5860180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700028E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017E2")]
			[Address(RVA = "0x58601D0", Offset = "0x585F1D0", VA = "0x58601D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017DD")]
		[Address(RVA = "0x585FE80", Offset = "0x585EE80", VA = "0x585FE80")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60017DE")]
		[Address(RVA = "0x5860010", Offset = "0x585F010", VA = "0x5860010", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60017DF")]
		[Address(RVA = "0x5860020", Offset = "0x585F020", VA = "0x5860020", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60017E1")]
		[Address(RVA = "0x5860190", Offset = "0x585F190", VA = "0x5860190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x1700028C")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017D9")]
		[Address(RVA = "0x585FDD0", Offset = "0x585EDD0", VA = "0x585FDD0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017DA")]
	[Address(RVA = "0x585FE00", Offset = "0x585EE00", VA = "0x585FE00", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x60017DB")]
	[Address(RVA = "0x585FEA0", Offset = "0x585EEA0", VA = "0x585FEA0", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x60017DC")]
	[Address(RVA = "0x585FFA0", Offset = "0x585EFA0", VA = "0x585FFA0")]
	public ErenCustomSkinLoader()
	{
	}
}
