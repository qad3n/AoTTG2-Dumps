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

[Token(Token = "0x2000253")]
internal class BaseCustomSkinPart
{
	[Token(Token = "0x2000254")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000CB6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000CB7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000CB8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4000CB9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseCustomSkinPart _003C_003E4__this;

		[Token(Token = "0x4000CBA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CoroutineWithData _003Ccwd_003E5__2;

		[Token(Token = "0x170001C1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E50")]
			[Address(RVA = "0x3F948D0", Offset = "0x3F948D0", VA = "0x3F948D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001C2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E52")]
			[Address(RVA = "0x3F94920", Offset = "0x3F94920", VA = "0x3F94920", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E4D")]
		[Address(RVA = "0x3F93AA0", Offset = "0x3F93AA0", VA = "0x3F93AA0")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E4E")]
		[Address(RVA = "0x3F942E0", Offset = "0x3F942E0", VA = "0x3F942E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E4F")]
		[Address(RVA = "0x3F942F0", Offset = "0x3F942F0", VA = "0x3F942F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E51")]
		[Address(RVA = "0x3F948E0", Offset = "0x3F948E0", VA = "0x3F948E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000CAE")]
	protected const string CharacterEffectShaderName = "Custom/CharacterEffectShader";

	[Token(Token = "0x4000CAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected BaseCustomSkinLoader _loader;

	[Token(Token = "0x4000CB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected List<Renderer> _renderers;

	[Token(Token = "0x4000CB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected string _rendererId;

	[Token(Token = "0x4000CB2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected int _maxSize;

	[Token(Token = "0x4000CB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	protected Vector2 _textureScale;

	[Token(Token = "0x4000CB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	protected readonly Vector2 _defaultTextureScale;

	[Token(Token = "0x4000CB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	protected bool _useTransparentMaterial;

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x3F8E9B0", Offset = "0x3F8E9B0", VA = "0x3F8E9B0")]
	public BaseCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale, bool useTransparentMaterial = false)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x3F8EC70", Offset = "0x3F8EC70", VA = "0x3F8EC70")]
	public bool LoadCache(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x3F939D0", Offset = "0x3F939D0", VA = "0x3F939D0")]
	protected bool IsCharacterEffectMaterial(Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x3F93580", Offset = "0x3F93580", VA = "0x3F93580")]
	protected bool TryApplyCachedTextureToEffectMaterials(Material cachedMaterial)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x3F8EDF0", Offset = "0x3F8EDF0", VA = "0x3F8EDF0")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__12))]
	public IEnumerator LoadSkin(string url)
	{
		return null;
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x3F93AC0", Offset = "0x3F93AC0", VA = "0x3F93AC0", Slot = "4")]
	protected virtual bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x3F93C70", Offset = "0x3F93C70", VA = "0x3F93C70", Slot = "5")]
	protected virtual void DisableRenderers()
	{
	}

	[Token(Token = "0x6000E49")]
	[Address(RVA = "0x3F93E70", Offset = "0x3F93E70", VA = "0x3F93E70", Slot = "6")]
	protected virtual void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x3F94020", Offset = "0x3F94020", VA = "0x3F94020", Slot = "7")]
	protected virtual Material SetNewTexture(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x3F942D0", Offset = "0x3F942D0", VA = "0x3F942D0")]
	public string GetRendererId()
	{
		return null;
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x3F91E70", Offset = "0x3F91E70", VA = "0x3F91E70")]
	public void ResetToDefault()
	{
	}
}
