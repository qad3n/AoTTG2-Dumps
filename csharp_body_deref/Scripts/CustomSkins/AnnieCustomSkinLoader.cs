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

[Token(Token = "0x20003B5")]
internal class AnnieCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003B6")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001316")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001317")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001318")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4001319")]
		[FieldOffset(Offset = "0x28")]
		public AnnieCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x17000285")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60017BD")]
			[Address(RVA = "0x585F170", Offset = "0x585E170", VA = "0x585F170", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000286")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60017BF")]
			[Address(RVA = "0x585F1C0", Offset = "0x585E1C0", VA = "0x585F1C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017BA")]
		[Address(RVA = "0x585E9F0", Offset = "0x585D9F0", VA = "0x585E9F0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60017BB")]
		[Address(RVA = "0x585EDC0", Offset = "0x585DDC0", VA = "0x585EDC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60017BC")]
		[Address(RVA = "0x585EDD0", Offset = "0x585DDD0", VA = "0x585EDD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60017BE")]
		[Address(RVA = "0x585F180", Offset = "0x585E180", VA = "0x585F180", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000284")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017B6")]
		[Address(RVA = "0x585E940", Offset = "0x585D940", VA = "0x585E940", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60017B7")]
	[Address(RVA = "0x585E970", Offset = "0x585D970", VA = "0x585E970", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x60017B8")]
	[Address(RVA = "0x585EA10", Offset = "0x585DA10", VA = "0x585EA10", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x60017B9")]
	[Address(RVA = "0x585ED40", Offset = "0x585DD40", VA = "0x585ED40")]
	public AnnieCustomSkinLoader()
	{
	}
}
