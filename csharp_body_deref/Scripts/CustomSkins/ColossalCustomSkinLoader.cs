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

[Token(Token = "0x200035A")]
internal class ColossalCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200035B")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001184")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001185")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001186")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4001187")]
		[FieldOffset(Offset = "0x28")]
		public ColossalCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x17000246")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001564")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000247")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001566")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001561")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001562")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001563")]
		[Address(RVA = "0x1E78910", Offset = "0x1E76F10", VA = "0x181E78910", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001565")]
		[Address(RVA = "0x1E78A10", Offset = "0x1E77010", VA = "0x181E78A10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000245")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x600155D")]
		[Address(RVA = "0x1E63EC0", Offset = "0x1E624C0", VA = "0x181E63EC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600155E")]
	[Address(RVA = "0x1E63DE0", Offset = "0x1E623E0", VA = "0x181E63DE0", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x600155F")]
	[Address(RVA = "0x1E63BD0", Offset = "0x1E621D0", VA = "0x181E63BD0", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6001560")]
	[Address(RVA = "0x1E63E70", Offset = "0x1E62470", VA = "0x181E63E70")]
	public ColossalCustomSkinLoader()
	{
	}
}
