// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.SkyboxCustomSkinLoader
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000367")]
internal class SkyboxCustomSkinLoader : BaseCustomSkinLoader
{
	[Token(Token = "0x2000368")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011C7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011C8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40011C9")]
		[FieldOffset(Offset = "0x20")]
		public SkyboxCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x40011CA")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x40011CB")]
		[FieldOffset(Offset = "0x30")]
		private List<int>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x17000253")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001597")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000254")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001599")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001593")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001594")]
		[Address(RVA = "0x1E99A80", Offset = "0x1E98080", VA = "0x181E99A80", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001595")]
		[Address(RVA = "0x1E99740", Offset = "0x1E97D40", VA = "0x181E99740", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001596")]
		[Address(RVA = "0x1E99B10", Offset = "0x1E98110", VA = "0x181E99B10")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001598")]
		[Address(RVA = "0x1E99A40", Offset = "0x1E98040", VA = "0x181E99A40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40011C6")]
	[FieldOffset(Offset = "0x0")]
	public static Material SkyboxMaterial;

	[Token(Token = "0x17000252")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x600158D")]
		[Address(RVA = "0x1E943D0", Offset = "0x1E929D0", VA = "0x181E943D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600158E")]
	[Address(RVA = "0x1E93FE0", Offset = "0x1E925E0", VA = "0x181E93FE0")]
	public static Material CreateSkyboxMaterial()
	{
		return null;
	}

	[Token(Token = "0x600158F")]
	[Address(RVA = "0x1E94270", Offset = "0x1E92870", VA = "0x181E94270", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__4))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001590")]
	[Address(RVA = "0x1E94090", Offset = "0x1E92690", VA = "0x181E94090", Slot = "6")]
	protected override BaseCustomSkinPart GetCustomSkinPart(int partId)
	{
		return null;
	}

	[Token(Token = "0x6001591")]
	[Address(RVA = "0x1E94300", Offset = "0x1E92900", VA = "0x181E94300")]
	public string PartIdToTextureName(SkyboxCustomSkinPartId partId)
	{
		return null;
	}

	[Token(Token = "0x6001592")]
	[Address(RVA = "0x1E94380", Offset = "0x1E92980", VA = "0x181E94380")]
	public SkyboxCustomSkinLoader()
	{
	}
}
