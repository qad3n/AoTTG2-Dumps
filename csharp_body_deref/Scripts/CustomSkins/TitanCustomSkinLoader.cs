// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/TitanCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x2000250")]
internal class TitanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000251")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000CA5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000CA6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000CA7")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4000CA8")]
		[FieldOffset(Offset = "0x28")]
		public TitanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000CA9")]
		[FieldOffset(Offset = "0x30")]
		private string _003CeyeUrl_003E5__2;

		[Token(Token = "0x170001BF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E3F")]
			[Address(RVA = "0x3F93230", Offset = "0x3F93230", VA = "0x3F93230", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001C0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E41")]
			[Address(RVA = "0x3F93280", Offset = "0x3F93280", VA = "0x3F93280", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E3C")]
		[Address(RVA = "0x3F92B70", Offset = "0x3F92B70", VA = "0x3F92B70")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E3D")]
		[Address(RVA = "0x3F92E20", Offset = "0x3F92E20", VA = "0x3F92E20", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E3E")]
		[Address(RVA = "0x3F92E30", Offset = "0x3F92E30", VA = "0x3F92E30", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E40")]
		[Address(RVA = "0x3F93240", Offset = "0x3F93240", VA = "0x3F93240", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x170001BE")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000E38")]
		[Address(RVA = "0x3F92AB0", Offset = "0x3F92AB0", VA = "0x3F92AB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x3F92AE0", Offset = "0x3F92AE0", VA = "0x3F92AE0", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x3F92B90", Offset = "0x3F92B90", VA = "0x3F92B90", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x3F92DB0", Offset = "0x3F92DB0", VA = "0x3F92DB0")]
	public TitanCustomSkinLoader()
	{
	}
}
