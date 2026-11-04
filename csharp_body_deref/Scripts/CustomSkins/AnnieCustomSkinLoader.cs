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

[Token(Token = "0x2000353")]
internal class AnnieCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000354")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001166")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001167")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001168")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4001169")]
		[FieldOffset(Offset = "0x28")]
		public AnnieCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x1700023E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600153D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700023F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600153F")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600153A")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600153B")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600153C")]
		[Address(RVA = "0x1E78910", Offset = "0x1E76F10", VA = "0x181E78910", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600153E")]
		[Address(RVA = "0x1E78A50", Offset = "0x1E77050", VA = "0x181E78A50", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x1700023D")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6001536")]
		[Address(RVA = "0x1E62670", Offset = "0x1E60C70", VA = "0x181E62670", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001537")]
	[Address(RVA = "0x1E62590", Offset = "0x1E60B90", VA = "0x181E62590", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001538")]
	[Address(RVA = "0x1E62380", Offset = "0x1E60980", VA = "0x181E62380", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6001539")]
	[Address(RVA = "0x1E62620", Offset = "0x1E60C20", VA = "0x181E62620")]
	public AnnieCustomSkinLoader()
	{
	}
}
