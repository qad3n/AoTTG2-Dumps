using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000067")]
[DisallowMultipleComponent]
public class TMP_SpriteAnimator : MonoBehaviour
{
	[Token(Token = "0x2000068")]
	[CompilerGenerated]
	private sealed class _003CDoSpriteAnimationInternal_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400031F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000320")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000321")]
		[FieldOffset(Offset = "0x20")]
		public TMP_SpriteAnimator _003C_003E4__this;

		[Token(Token = "0x4000322")]
		[FieldOffset(Offset = "0x28")]
		public int start;

		[Token(Token = "0x4000323")]
		[FieldOffset(Offset = "0x2C")]
		public int end;

		[Token(Token = "0x4000324")]
		[FieldOffset(Offset = "0x30")]
		public TMP_SpriteAsset spriteAsset;

		[Token(Token = "0x4000325")]
		[FieldOffset(Offset = "0x38")]
		public int currentCharacter;

		[Token(Token = "0x4000326")]
		[FieldOffset(Offset = "0x3C")]
		public int framerate;

		[Token(Token = "0x4000327")]
		[FieldOffset(Offset = "0x40")]
		private int _003CcurrentFrame_003E5__2;

		[Token(Token = "0x4000328")]
		[FieldOffset(Offset = "0x48")]
		private TMP_CharacterInfo _003CcharInfo_003E5__3;

		[Token(Token = "0x4000329")]
		[FieldOffset(Offset = "0x1C0")]
		private int _003CmaterialIndex_003E5__4;

		[Token(Token = "0x400032A")]
		[FieldOffset(Offset = "0x1C4")]
		private int _003CvertexIndex_003E5__5;

		[Token(Token = "0x400032B")]
		[FieldOffset(Offset = "0x1C8")]
		private TMP_MeshInfo _003CmeshInfo_003E5__6;

		[Token(Token = "0x400032C")]
		[FieldOffset(Offset = "0x218")]
		private float _003CbaseSpriteScale_003E5__7;

		[Token(Token = "0x400032D")]
		[FieldOffset(Offset = "0x21C")]
		private float _003CelapsedTime_003E5__8;

		[Token(Token = "0x400032E")]
		[FieldOffset(Offset = "0x220")]
		private float _003CtargetTime_003E5__9;

		[Token(Token = "0x170000BF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600031F")]
			[Address(RVA = "0x4940F30", Offset = "0x4940F30", VA = "0x4940F30", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000C0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000321")]
			[Address(RVA = "0x4940F80", Offset = "0x4940F80", VA = "0x4940F80", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600031C")]
		[Address(RVA = "0x4940300", Offset = "0x4940300", VA = "0x4940300")]
		[DebuggerHidden]
		public _003CDoSpriteAnimationInternal_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600031D")]
		[Address(RVA = "0x49403A0", Offset = "0x49403A0", VA = "0x49403A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600031E")]
		[Address(RVA = "0x49403B0", Offset = "0x49403B0", VA = "0x49403B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000320")]
		[Address(RVA = "0x4940F40", Offset = "0x4940F40", VA = "0x4940F40", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, bool> m_animations;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x28")]
	private TMP_Text m_TextComponent;

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4940040", Offset = "0x4940040", VA = "0x4940040")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4940090", Offset = "0x4940090", VA = "0x4940090")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x49400A0", Offset = "0x49400A0", VA = "0x49400A0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x49400B0", Offset = "0x49400B0", VA = "0x49400B0")]
	public void StopAllAnimations()
	{
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4940100", Offset = "0x4940100", VA = "0x4940100")]
	public void DoSpriteAnimation(int currentCharacter, TMP_SpriteAsset spriteAsset, int start, int end, int framerate)
	{
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4940240", Offset = "0x4940240", VA = "0x4940240")]
	[IteratorStateMachine(typeof(_003CDoSpriteAnimationInternal_003Ed__7))]
	private IEnumerator DoSpriteAnimationInternal(int currentCharacter, TMP_SpriteAsset spriteAsset, int start, int end, int framerate)
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4940320", Offset = "0x4940320", VA = "0x4940320")]
	public TMP_SpriteAnimator()
	{
	}
}
