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

[Token(Token = "0x200035D")]
internal class ErenCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200035E")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400118A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400118B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400118C")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x400118D")]
		[FieldOffset(Offset = "0x28")]
		public ErenCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x17000249")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600156E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700024A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001570")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600156B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600156C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600156D")]
		[Address(RVA = "0x1E78910", Offset = "0x1E76F10", VA = "0x181E78910", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600156F")]
		[Address(RVA = "0x1E78A90", Offset = "0x1E77090", VA = "0x181E78A90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x17000248")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6001567")]
		[Address(RVA = "0x1E65F40", Offset = "0x1E64540", VA = "0x181E65F40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001568")]
	[Address(RVA = "0x1E65E60", Offset = "0x1E64460", VA = "0x181E65E60", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001569")]
	[Address(RVA = "0x1E65C50", Offset = "0x1E64250", VA = "0x181E65C50", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x600156A")]
	[Address(RVA = "0x1E65EF0", Offset = "0x1E644F0", VA = "0x181E65EF0")]
	public ErenCustomSkinLoader()
	{
	}
}
