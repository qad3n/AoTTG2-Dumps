// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.BaseCustomSkinPart
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/BaseCustomSkinPart.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinParts/BaseCustomSkinPart.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using Utility;

namespace CustomSkins;

[Token(Token = "0x20003C8")]
internal class BaseCustomSkinPart
{
	[Token(Token = "0x20003CA")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001375")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001376")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001377")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4001378")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseCustomSkinPart _003C_003E4__this;

		[Token(Token = "0x4001379")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private string _003Cid_003E5__2;

		[Token(Token = "0x400137A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private CoroutineWithData _003Ccwd_003E5__3;

		[Token(Token = "0x1700029A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600181B")]
			[Address(RVA = "0x5864C80", Offset = "0x5863C80", VA = "0x5864C80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700029B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600181D")]
			[Address(RVA = "0x5864CD0", Offset = "0x5863CD0", VA = "0x5864CD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001818")]
		[Address(RVA = "0x5863610", Offset = "0x5862610", VA = "0x5863610")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001819")]
		[Address(RVA = "0x5864150", Offset = "0x5863150", VA = "0x5864150", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600181A")]
		[Address(RVA = "0x5864160", Offset = "0x5863160", VA = "0x5864160", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600181C")]
		[Address(RVA = "0x5864C90", Offset = "0x5863C90", VA = "0x5864C90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400136A")]
	protected const string CharacterEffectShaderName = "Custom/CharacterEffectShader";

	[Token(Token = "0x400136B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected BaseCustomSkinLoader _loader;

	[Token(Token = "0x400136C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected List<Renderer> _renderers;

	[Token(Token = "0x400136D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected string _rendererId;

	[Token(Token = "0x400136E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected int _maxSize;

	[Token(Token = "0x400136F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	protected Vector2 _textureScale;

	[Token(Token = "0x4001370")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	protected readonly Vector2 _defaultTextureScale;

	[Token(Token = "0x4001371")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	protected bool _useTransparentMaterial;

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x585EC60", Offset = "0x585DC60", VA = "0x585EC60")]
	public BaseCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale, bool useTransparentMaterial = false)
	{
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x585EF30", Offset = "0x585DF30", VA = "0x585EF30")]
	public bool LoadCache(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x5863540", Offset = "0x5862540", VA = "0x5863540")]
	protected bool IsCharacterEffectMaterial(Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x600180B")]
	[Address(RVA = "0x585F0F0", Offset = "0x585E0F0", VA = "0x585F0F0")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__11))]
	public IEnumerator LoadSkin(string url)
	{
		return null;
	}

	[Token(Token = "0x600180C")]
	[Address(RVA = "0x5863630", Offset = "0x5862630", VA = "0x5863630", Slot = "4")]
	protected virtual bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x600180D")]
	[Address(RVA = "0x58637D0", Offset = "0x58627D0", VA = "0x58637D0", Slot = "5")]
	protected virtual void DisableRenderers()
	{
	}

	[Token(Token = "0x600180E")]
	[Address(RVA = "0x58639B0", Offset = "0x58629B0", VA = "0x58639B0", Slot = "6")]
	protected virtual void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x600180F")]
	[Address(RVA = "0x5863B40", Offset = "0x5862B40", VA = "0x5863B40", Slot = "7")]
	protected virtual Material CreateMaterial()
	{
		return null;
	}

	[Token(Token = "0x6001810")]
	[Address(RVA = "0x5863E30", Offset = "0x5862E30", VA = "0x5863E30", Slot = "8")]
	protected virtual Material SetNewTexture(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x6001811")]
	[Address(RVA = "0x5863FE0", Offset = "0x5862FE0", VA = "0x5863FE0")]
	public string GetRendererId()
	{
		return null;
	}

	[Token(Token = "0x6001812")]
	[Address(RVA = "0x5861AD0", Offset = "0x5860AD0", VA = "0x5861AD0")]
	public void ResetToDefault()
	{
	}
}
