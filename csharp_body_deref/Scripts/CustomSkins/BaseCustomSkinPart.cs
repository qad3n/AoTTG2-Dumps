// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.BaseCustomSkinPart
// Update status: CHANGED in this game update
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

[Token(Token = "0x200036D")]
internal class BaseCustomSkinPart
{
	[Token(Token = "0x200036F")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__11 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40011EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40011EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40011EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x40011ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseCustomSkinPart _003C_003E4__this;

		[Token(Token = "0x40011EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CoroutineWithData _003Ccwd_003E5__2;

		[Token(Token = "0x17000259")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60015B9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700025A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60015BB")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60015B6")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__11(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60015B7")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60015B8")]
		[Address(RVA = "0x1E99370", Offset = "0x1E97970", VA = "0x181E99370", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60015BA")]
		[Address(RVA = "0x1E99700", Offset = "0x1E97D00", VA = "0x181E99700", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40011DF")]
	protected const string CharacterEffectShaderName = "Custom/CharacterEffectShader";

	[Token(Token = "0x40011E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected BaseCustomSkinLoader _loader;

	[Token(Token = "0x40011E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected List<Renderer> _renderers;

	[Token(Token = "0x40011E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected string _rendererId;

	[Token(Token = "0x40011E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected int _maxSize;

	[Token(Token = "0x40011E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	protected Vector2 _textureScale;

	[Token(Token = "0x40011E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	protected readonly Vector2 _defaultTextureScale;

	[Token(Token = "0x40011E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	protected bool _useTransparentMaterial;

	[Token(Token = "0x60015A6")]
	[Address(RVA = "0x1E7D590", Offset = "0x1E7BB90", VA = "0x181E7D590")]
	public BaseCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale, bool useTransparentMaterial = false)
	{
	}

	[Token(Token = "0x60015A7")]
	[Address(RVA = "0x1E7CB50", Offset = "0x1E7B150", VA = "0x181E7CB50")]
	public bool LoadCache(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A8")]
	[Address(RVA = "0x1E7C900", Offset = "0x1E7AF00", VA = "0x181E7C900")]
	protected bool IsCharacterEffectMaterial(Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x60015A9")]
	[Address(RVA = "0x1E7CEB0", Offset = "0x1E7B4B0", VA = "0x181E7CEB0")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__11))]
	public IEnumerator LoadSkin(string url)
	{
		return null;
	}

	[Token(Token = "0x60015AA")]
	[Address(RVA = "0x1E7C9E0", Offset = "0x1E7AFE0", VA = "0x181E7C9E0", Slot = "4")]
	protected virtual bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x60015AB")]
	[Address(RVA = "0x1E7C750", Offset = "0x1E7AD50", VA = "0x181E7C750", Slot = "5")]
	protected virtual void DisableRenderers()
	{
	}

	[Token(Token = "0x60015AC")]
	[Address(RVA = "0x1E7D110", Offset = "0x1E7B710", VA = "0x181E7D110", Slot = "6")]
	protected virtual void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x60015AD")]
	[Address(RVA = "0x1E7C480", Offset = "0x1E7AA80", VA = "0x181E7C480", Slot = "7")]
	protected virtual Material CreateMaterial()
	{
		return null;
	}

	[Token(Token = "0x60015AE")]
	[Address(RVA = "0x1E7D270", Offset = "0x1E7B870", VA = "0x181E7D270", Slot = "8")]
	protected virtual Material SetNewTexture(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
	public string GetRendererId()
	{
		return null;
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x1E7CF40", Offset = "0x1E7B540", VA = "0x181E7CF40")]
	public void ResetToDefault()
	{
	}
}
