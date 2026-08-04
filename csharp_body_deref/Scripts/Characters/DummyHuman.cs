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

[Token(Token = "0x20004EE")]
internal class DummyHuman : DummyCharacter
{
	[Token(Token = "0x20004F1")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinCoroutine_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40015E8")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40015E9")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40015EA")]
		[FieldOffset(Offset = "0x20")]
		public DummyHuman _003C_003E4__this;

		[Token(Token = "0x170009C4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60033FF")]
			[Address(RVA = "0x41B0AD0", Offset = "0x41B0AD0", VA = "0x41B0AD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009C5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003401")]
			[Address(RVA = "0x41B0B20", Offset = "0x41B0B20", VA = "0x41B0B20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60033FC")]
		[Address(RVA = "0x41AE380", Offset = "0x41AE380", VA = "0x41AE380")]
		[DebuggerHidden]
		public _003CLoadSkinCoroutine_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60033FD")]
		[Address(RVA = "0x41AE560", Offset = "0x41AE560", VA = "0x41AE560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60033FE")]
		[Address(RVA = "0x41AE570", Offset = "0x41AE570", VA = "0x41AE570", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003400")]
		[Address(RVA = "0x41B0AE0", Offset = "0x41B0AE0", VA = "0x41B0AE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40015DE")]
	[FieldOffset(Offset = "0x30")]
	public HumanComponentCache Cache;

	[Token(Token = "0x40015DF")]
	[FieldOffset(Offset = "0x38")]
	public HumanSetup Setup;

	[Token(Token = "0x40015E0")]
	[FieldOffset(Offset = "0x40")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x40015E1")]
	[FieldOffset(Offset = "0x48")]
	private bool _isLoadingSkins;

	[Token(Token = "0x60033F0")]
	[Address(RVA = "0x41ADC80", Offset = "0x41ADC80", VA = "0x41ADC80", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60033F1")]
	[Address(RVA = "0x41ADEB0", Offset = "0x41ADEB0", VA = "0x41ADEB0")]
	protected void Start()
	{
	}

	[Token(Token = "0x60033F2")]
	[Address(RVA = "0x41ADF60", Offset = "0x41ADF60", VA = "0x41ADF60", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		return null;
	}

	[Token(Token = "0x60033F3")]
	[Address(RVA = "0x41AE070", Offset = "0x41AE070", VA = "0x41AE070", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		return null;
	}

	[Token(Token = "0x60033F4")]
	[Address(RVA = "0x41AE280", Offset = "0x41AE280", VA = "0x41AE280")]
	public void LoadSkin()
	{
	}

	[Token(Token = "0x60033F5")]
	[Address(RVA = "0x41AE310", Offset = "0x41AE310", VA = "0x41AE310")]
	[IteratorStateMachine(typeof(_003CLoadSkinCoroutine_003Ed__9))]
	private IEnumerator LoadSkinCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60033F6")]
	[Address(RVA = "0x41AE3A0", Offset = "0x41AE3A0", VA = "0x41AE3A0")]
	public DummyHuman()
	{
	}
}
