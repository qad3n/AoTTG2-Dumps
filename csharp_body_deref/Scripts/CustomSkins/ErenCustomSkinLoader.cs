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

[Token(Token = "0x2000243")]
internal class ErenCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000244")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C5E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C5F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C60")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4000C61")]
		[FieldOffset(Offset = "0x28")]
		public ErenCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x170001B3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E0E")]
			[Address(RVA = "0x3F8F280", Offset = "0x3F8F280", VA = "0x3F8F280", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001B4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E10")]
			[Address(RVA = "0x3F8F2D0", Offset = "0x3F8F2D0", VA = "0x3F8F2D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E0B")]
		[Address(RVA = "0x3F8EFA0", Offset = "0x3F8EFA0", VA = "0x3F8EFA0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E0C")]
		[Address(RVA = "0x3F8F110", Offset = "0x3F8F110", VA = "0x3F8F110", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E0D")]
		[Address(RVA = "0x3F8F120", Offset = "0x3F8F120", VA = "0x3F8F120", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E0F")]
		[Address(RVA = "0x3F8F290", Offset = "0x3F8F290", VA = "0x3F8F290", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x170001B2")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000E07")]
		[Address(RVA = "0x3F8EEE0", Offset = "0x3F8EEE0", VA = "0x3F8EEE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E08")]
	[Address(RVA = "0x3F8EF10", Offset = "0x3F8EF10", VA = "0x3F8EF10", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__2))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000E09")]
	[Address(RVA = "0x3F8EFC0", Offset = "0x3F8EFC0", VA = "0x3F8EFC0", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000E0A")]
	[Address(RVA = "0x3F8F0A0", Offset = "0x3F8F0A0", VA = "0x3F8F0A0")]
	public ErenCustomSkinLoader()
	{
	}
}
