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

[Token(Token = "0x200021D")]
internal class BaseCustomSkinPart
{
	[Token(Token = "0x200021E")]
	[CompilerGenerated]
	private sealed class _003CLoadSkin_003Ed__12 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000BDD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000BDE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000BDF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string url;

		[Token(Token = "0x4000BE0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseCustomSkinPart _003C_003E4__this;

		[Token(Token = "0x4000BE1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private CoroutineWithData _003Ccwd_003E5__2;

		[Token(Token = "0x1700016A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000CB7")]
			[Address(RVA = "0x4147870", Offset = "0x4147870", VA = "0x4147870", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700016B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000CB9")]
			[Address(RVA = "0x41478C0", Offset = "0x41478C0", VA = "0x41478C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x4146A40", Offset = "0x4146A40", VA = "0x4146A40")]
		[DebuggerHidden]
		public _003CLoadSkin_003Ed__12(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x4147280", Offset = "0x4147280", VA = "0x4147280", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000CB6")]
		[Address(RVA = "0x4147290", Offset = "0x4147290", VA = "0x4147290", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x4147880", Offset = "0x4147880", VA = "0x4147880", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000BD5")]
	protected const string CharacterEffectShaderName = "Custom/CharacterEffectShader";

	[Token(Token = "0x4000BD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected BaseCustomSkinLoader _loader;

	[Token(Token = "0x4000BD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	protected List<Renderer> _renderers;

	[Token(Token = "0x4000BD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	protected string _rendererId;

	[Token(Token = "0x4000BD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	protected int _maxSize;

	[Token(Token = "0x4000BDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	protected Vector2 _textureScale;

	[Token(Token = "0x4000BDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	protected readonly Vector2 _defaultTextureScale;

	[Token(Token = "0x4000BDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	protected bool _useTransparentMaterial;

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x413F010", Offset = "0x413F010", VA = "0x413F010")]
	public BaseCustomSkinPart(BaseCustomSkinLoader loader, List<Renderer> renderers, string rendererId, int maxSize, [Optional] Vector2? textureScale, bool useTransparentMaterial = false)
	{
	}

	[Token(Token = "0x6000CAA")]
	[Address(RVA = "0x413F2E0", Offset = "0x413F2E0", VA = "0x413F2E0")]
	public bool LoadCache(string url)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAB")]
	[Address(RVA = "0x4146970", Offset = "0x4146970", VA = "0x4146970")]
	protected bool IsCharacterEffectMaterial(Material material)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAC")]
	[Address(RVA = "0x4146520", Offset = "0x4146520", VA = "0x4146520")]
	protected bool TryApplyCachedTextureToEffectMaterials(Material cachedMaterial)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAD")]
	[Address(RVA = "0x413F460", Offset = "0x413F460", VA = "0x413F460")]
	[IteratorStateMachine(typeof(_003CLoadSkin_003Ed__12))]
	public IEnumerator LoadSkin(string url)
	{
		return null;
	}

	[Token(Token = "0x6000CAE")]
	[Address(RVA = "0x4146A60", Offset = "0x4146A60", VA = "0x4146A60", Slot = "4")]
	protected virtual bool IsValidPart()
	{
		return default(bool);
	}

	[Token(Token = "0x6000CAF")]
	[Address(RVA = "0x4146C10", Offset = "0x4146C10", VA = "0x4146C10", Slot = "5")]
	protected virtual void DisableRenderers()
	{
	}

	[Token(Token = "0x6000CB0")]
	[Address(RVA = "0x4146E10", Offset = "0x4146E10", VA = "0x4146E10", Slot = "6")]
	protected virtual void SetMaterial(Material material)
	{
	}

	[Token(Token = "0x6000CB1")]
	[Address(RVA = "0x4146FC0", Offset = "0x4146FC0", VA = "0x4146FC0", Slot = "7")]
	protected virtual Material SetNewTexture(Texture2D texture)
	{
		return null;
	}

	[Token(Token = "0x6000CB2")]
	[Address(RVA = "0x4147270", Offset = "0x4147270", VA = "0x4147270")]
	public string GetRendererId()
	{
		return null;
	}

	[Token(Token = "0x6000CB3")]
	[Address(RVA = "0x4144CC0", Offset = "0x4144CC0", VA = "0x4144CC0")]
	public void ResetToDefault()
	{
	}
}
