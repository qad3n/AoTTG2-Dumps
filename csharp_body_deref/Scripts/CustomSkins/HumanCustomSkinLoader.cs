// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.HumanCustomSkinLoader
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000249")]
internal class HumanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200024A")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C7B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C7C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C7D")]
		[FieldOffset(Offset = "0x20")]
		public HumanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000C7E")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4000C7F")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003CskinUrls_003E5__2;

		[Token(Token = "0x4000C80")]
		[FieldOffset(Offset = "0x38")]
		private int _003CpartId_003E5__3;

		[Token(Token = "0x170001B9")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E26")]
			[Address(RVA = "0x3F920C0", Offset = "0x3F920C0", VA = "0x3F920C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BA")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E28")]
			[Address(RVA = "0x3F92110", Offset = "0x3F92110", VA = "0x3F92110", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x3F908E0", Offset = "0x3F908E0", VA = "0x3F908E0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x3F91990", Offset = "0x3F91990", VA = "0x3F91990", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x3F919A0", Offset = "0x3F919A0", VA = "0x3F919A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E27")]
		[Address(RVA = "0x3F920D0", Offset = "0x3F920D0", VA = "0x3F920D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000C77")]
	[FieldOffset(Offset = "0x28")]
	private int _horseViewId;

	[Token(Token = "0x4000C78")]
	[FieldOffset(Offset = "0x2C")]
	private float _hookLTiling;

	[Token(Token = "0x4000C79")]
	[FieldOffset(Offset = "0x30")]
	private float _hookRTiling;

	[Token(Token = "0x4000C7A")]
	[FieldOffset(Offset = "0x34")]
	public bool Finished;

	[Token(Token = "0x170001B8")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x3F90830", Offset = "0x3F90830", VA = "0x3F90830", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x3F90860", Offset = "0x3F90860", VA = "0x3F90860", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__6))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x3F90900", Offset = "0x3F90900", VA = "0x3F90900")]
	public BaseCustomSkinPart GetCustomSkinPartPublic(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x3F90920", Offset = "0x3F90920", VA = "0x3F90920", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x3F91920", Offset = "0x3F91920", VA = "0x3F91920")]
	public HumanCustomSkinLoader()
	{
	}
}
