// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.SkyboxCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/SkyboxCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/SkyboxCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x200024D")]
internal class SkyboxCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200024E")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__3 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C99")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C9A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C9B")]
		[FieldOffset(Offset = "0x20")]
		public SkyboxCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000C9C")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4000C9D")]
		[FieldOffset(Offset = "0x30")]
		private List<int>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x170001BC")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E35")]
			[Address(RVA = "0x3F92A50", Offset = "0x3F92A50", VA = "0x3F92A50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001BD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E37")]
			[Address(RVA = "0x3F92AA0", Offset = "0x3F92AA0", VA = "0x3F92AA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E31")]
		[Address(RVA = "0x3F92250", Offset = "0x3F92250", VA = "0x3F92250")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__3(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E32")]
		[Address(RVA = "0x3F92520", Offset = "0x3F92520", VA = "0x3F92520", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E33")]
		[Address(RVA = "0x3F92570", Offset = "0x3F92570", VA = "0x3F92570", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E34")]
		[Address(RVA = "0x3F92A10", Offset = "0x3F92A10", VA = "0x3F92A10")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E36")]
		[Address(RVA = "0x3F92A60", Offset = "0x3F92A60", VA = "0x3F92A60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000C98")]
	[FieldOffset(Offset = "0x0")]
	public static Material SkyboxMaterial;

	[Token(Token = "0x170001BB")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000E2C")]
		[Address(RVA = "0x3F921A0", Offset = "0x3F921A0", VA = "0x3F921A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x3F921D0", Offset = "0x3F921D0", VA = "0x3F921D0", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__3))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x3F92270", Offset = "0x3F92270", VA = "0x3F92270", Slot = "5")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x3F923C0", Offset = "0x3F923C0", VA = "0x3F923C0")]
	public string PartIdToTextureName(SkyboxCustomSkinPartId partId)
	{
		return null;
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x3F924B0", Offset = "0x3F924B0", VA = "0x3F924B0")]
	public SkyboxCustomSkinLoader()
	{
	}
}
