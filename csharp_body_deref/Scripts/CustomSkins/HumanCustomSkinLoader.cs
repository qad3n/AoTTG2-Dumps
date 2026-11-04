// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanCustomSkinLoader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/HumanCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/HumanCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomSkins;

[Token(Token = "0x2000363")]
internal class HumanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000364")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011A7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011A8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40011A9")]
		[FieldOffset(Offset = "0x20")]
		public HumanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x40011AA")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x40011AB")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003CskinUrls_003E5__2;

		[Token(Token = "0x40011AC")]
		[FieldOffset(Offset = "0x38")]
		private int _003CpartId_003E5__3;

		[Token(Token = "0x17000250")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001587")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000251")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001589")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001584")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001585")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001586")]
		[Address(RVA = "0x1E7A2A0", Offset = "0x1E788A0", VA = "0x181E7A2A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001588")]
		[Address(RVA = "0x1E7A740", Offset = "0x1E78D40", VA = "0x181E7A740", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40011A3")]
	[FieldOffset(Offset = "0x28")]
	private int _horseViewId;

	[Token(Token = "0x40011A4")]
	[FieldOffset(Offset = "0x2C")]
	private float _hookLTiling;

	[Token(Token = "0x40011A5")]
	[FieldOffset(Offset = "0x30")]
	private float _hookRTiling;

	[Token(Token = "0x40011A6")]
	[FieldOffset(Offset = "0x34")]
	public bool Finished;

	[Token(Token = "0x1700024E")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x600157E")]
		[Address(RVA = "0x1E67B70", Offset = "0x1E66170", VA = "0x181E67B70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024F")]
	internal override bool AllowLocalFileTextures
	{
		[Token(Token = "0x600157F")]
		[Address(RVA = "0x1E67A00", Offset = "0x1E66000", VA = "0x181E67A00", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001580")]
	[Address(RVA = "0x1E67920", Offset = "0x1E65F20", VA = "0x181E67920", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__8))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001581")]
	[Address(RVA = "0x19C4B60", Offset = "0x19C3160", VA = "0x1819C4B60")]
	public BaseCustomSkinPart GetCustomSkinPartPublic(int partId)
	{
		return null;
	}

	[Token(Token = "0x6001582")]
	[Address(RVA = "0x1E66A70", Offset = "0x1E65070", VA = "0x181E66A70", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6001583")]
	[Address(RVA = "0x1E679B0", Offset = "0x1E65FB0", VA = "0x181E679B0")]
	public HumanCustomSkinLoader()
	{
	}
}
