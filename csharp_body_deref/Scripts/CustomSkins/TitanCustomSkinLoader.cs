// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanCustomSkinLoader
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20003C5")]
internal class TitanCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x20003C6")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400135F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001360")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001361")]
		[FieldOffset(Offset = "0x20")]
		public object[] data;

		[Token(Token = "0x4001362")]
		[FieldOffset(Offset = "0x28")]
		public TitanCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4001363")]
		[FieldOffset(Offset = "0x30")]
		private string[] _003CskinUrls_003E5__2;

		[Token(Token = "0x4001364")]
		[FieldOffset(Offset = "0x38")]
		private int _003CpartId_003E5__3;

		[Token(Token = "0x17000298")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001805")]
			[Address(RVA = "0x5863100", Offset = "0x5862100", VA = "0x5863100", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000299")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001807")]
			[Address(RVA = "0x5863150", Offset = "0x5862150", VA = "0x5863150", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001802")]
		[Address(RVA = "0x58628E0", Offset = "0x58618E0", VA = "0x58628E0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__5(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001803")]
		[Address(RVA = "0x5862F00", Offset = "0x5861F00", VA = "0x5862F00", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001804")]
		[Address(RVA = "0x5862F10", Offset = "0x5861F10", VA = "0x5862F10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001806")]
		[Address(RVA = "0x5863110", Offset = "0x5862110", VA = "0x5863110", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400135E")]
	private const string HeadBonePath = "Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head";

	[Token(Token = "0x17000296")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x60017FC")]
		[Address(RVA = "0x5862690", Offset = "0x5861690", VA = "0x5862690", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000297")]
	internal override bool AllowLocalFileTextures
	{
		[Token(Token = "0x60017FD")]
		[Address(RVA = "0x58626C0", Offset = "0x58616C0", VA = "0x58626C0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x5862860", Offset = "0x5861860", VA = "0x5862860", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__5))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x5862900", Offset = "0x5861900", VA = "0x5862900", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6001800")]
	[Address(RVA = "0x5862DA0", Offset = "0x5861DA0", VA = "0x5862DA0")]
	private GameObject FindChild(Transform parent, string name)
	{
		return null;
	}

	[Token(Token = "0x6001801")]
	[Address(RVA = "0x5862E90", Offset = "0x5861E90", VA = "0x5862E90")]
	public TitanCustomSkinLoader()
	{
	}
}
