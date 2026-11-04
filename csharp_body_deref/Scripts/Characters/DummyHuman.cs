// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyHuman
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DummyHuman.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/DummyHuman.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;

namespace Characters;

[Token(Token = "0x2000647")]
internal class DummyHuman : DummyCharacter
{
	[Token(Token = "0x200064A")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinCoroutine_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001C5A")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001C5B")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001C5C")]
		[FieldOffset(Offset = "0x20")]
		public DummyHuman _003C_003E4__this;

		[Token(Token = "0x17000AD7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003DE5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000AD8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003DE7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003DE2")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinCoroutine_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003DE3")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003DE4")]
		[Address(RVA = "0x211D250", Offset = "0x211B850", VA = "0x18211D250", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003DE6")]
		[Address(RVA = "0x211EAA0", Offset = "0x211D0A0", VA = "0x18211EAA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001C50")]
	[FieldOffset(Offset = "0x30")]
	public HumanComponentCache Cache;

	[Token(Token = "0x4001C51")]
	[FieldOffset(Offset = "0x38")]
	public HumanSetup Setup;

	[Token(Token = "0x4001C52")]
	[FieldOffset(Offset = "0x40")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001C53")]
	[FieldOffset(Offset = "0x48")]
	private bool _isLoadingSkins;

	[Token(Token = "0x6003DD6")]
	[Address(RVA = "0x2116D70", Offset = "0x2115370", VA = "0x182116D70", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003DD7")]
	[Address(RVA = "0x2117520", Offset = "0x2115B20", VA = "0x182117520")]
	protected void Start()
	{
	}

	[Token(Token = "0x6003DD8")]
	[Address(RVA = "0x2117290", Offset = "0x2115890", VA = "0x182117290", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x6003DD9")]
	[Address(RVA = "0x2116FA0", Offset = "0x21155A0", VA = "0x182116FA0", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x6003DDA")]
	[Address(RVA = "0x21174A0", Offset = "0x2115AA0", VA = "0x1821174A0")]
	public void LoadSkin()
	{
	}

	[Token(Token = "0x6003DDB")]
	[Address(RVA = "0x2117430", Offset = "0x2115A30", VA = "0x182117430")]
	[IteratorStateMachine(typeof(_003CLoadSkinCoroutine_003Ed__9))]
	private IEnumerator LoadSkinCoroutine()
	{
		return null;
	}

	[Token(Token = "0x6003DDC")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public DummyHuman()
	{
	}
}
