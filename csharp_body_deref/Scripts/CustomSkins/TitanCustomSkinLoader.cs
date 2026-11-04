// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanCustomSkinLoader
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/TitanCustomSkinLoader.cs
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

[Token(Token = "0x200036A")]
internal class TitanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x200036B")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011D4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011D5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40011D6")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x40011D7")]
		[FieldOffset(Offset = "0x28")]
		public TitanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x40011D8")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003CskinUrls_003E5__2;

		[Token(Token = "0x40011D9")]
		[FieldOffset(Offset = "0x38")]
		private int _003CpartId_003E5__3;

		[Token(Token = "0x17000257")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60015A3")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000258")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60015A5")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60015A0")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60015A1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60015A2")]
		[Address(RVA = "0x1E99B60", Offset = "0x1E98160", VA = "0x181E99B60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60015A4")]
		[Address(RVA = "0x1E99D20", Offset = "0x1E98320", VA = "0x181E99D20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40011D3")]
	private const string HeadBonePath = "Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head";

	[Token(Token = "0x17000255")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0x1E96130", Offset = "0x1E94730", VA = "0x181E96130", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000256")]
	internal override bool AllowLocalFileTextures
	{
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x1E95F90", Offset = "0x1E94590", VA = "0x181E95F90", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600159C")]
	[Address(RVA = "0x1E95EB0", Offset = "0x1E944B0", VA = "0x181E95EB0", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__5))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x600159D")]
	[Address(RVA = "0x1E95B30", Offset = "0x1E94130", VA = "0x181E95B30", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x600159E")]
	[Address(RVA = "0x1E95A70", Offset = "0x1E94070", VA = "0x181E95A70")]
	private GameObject FindChild(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x600159F")]
	[Address(RVA = "0x1E95F40", Offset = "0x1E94540", VA = "0x181E95F40")]
	public TitanCustomSkinLoader()
	{
	}
}
