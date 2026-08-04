// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_SpriteAnimator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200007D")]
[DisallowMultipleComponent]
public class TMP_SpriteAnimator : MonoBehaviour
{
	[Token(Token = "0x200007E")]
	[CompilerGenerated]
	private sealed class _003CDoSpriteAnimationInternal_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000413")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000414")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000415")]
		[FieldOffset(Offset = "0x20")]
		public TMP_SpriteAnimator _003C_003E4__this;

		[Token(Token = "0x4000416")]
		[FieldOffset(Offset = "0x28")]
		public int start;

		[Token(Token = "0x4000417")]
		[FieldOffset(Offset = "0x2C")]
		public int end;

		[Token(Token = "0x4000418")]
		[FieldOffset(Offset = "0x30")]
		public TMP_SpriteAsset spriteAsset;

		[Token(Token = "0x4000419")]
		[FieldOffset(Offset = "0x38")]
		public int currentCharacter;

		[Token(Token = "0x400041A")]
		[FieldOffset(Offset = "0x3C")]
		public int framerate;

		[Token(Token = "0x400041B")]
		[FieldOffset(Offset = "0x40")]
		private int _003CcurrentFrame_003E5__2;

		[Token(Token = "0x400041C")]
		[FieldOffset(Offset = "0x48")]
		private TMP_CharacterInfo _003CcharInfo_003E5__3;

		[Token(Token = "0x400041D")]
		[FieldOffset(Offset = "0x1C0")]
		private int _003CmaterialIndex_003E5__4;

		[Token(Token = "0x400041E")]
		[FieldOffset(Offset = "0x1C4")]
		private int _003CvertexIndex_003E5__5;

		[Token(Token = "0x400041F")]
		[FieldOffset(Offset = "0x1C8")]
		private TMP_MeshInfo _003CmeshInfo_003E5__6;

		[Token(Token = "0x4000420")]
		[FieldOffset(Offset = "0x218")]
		private float _003CbaseSpriteScale_003E5__7;

		[Token(Token = "0x4000421")]
		[FieldOffset(Offset = "0x21C")]
		private float _003CelapsedTime_003E5__8;

		[Token(Token = "0x4000422")]
		[FieldOffset(Offset = "0x220")]
		private float _003CtargetTime_003E5__9;

		[Token(Token = "0x170000E0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000410")]
			[Address(RVA = "0x4C8E4B0", Offset = "0x4C8E4B0", VA = "0x4C8E4B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000E1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000412")]
			[Address(RVA = "0x4C8E500", Offset = "0x4C8E500", VA = "0x4C8E500", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600040D")]
		[Address(RVA = "0x4C8D880", Offset = "0x4C8D880", VA = "0x4C8D880")]
		[DebuggerHidden]
		public _003CDoSpriteAnimationInternal_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600040E")]
		[Address(RVA = "0x4C8D920", Offset = "0x4C8D920", VA = "0x4C8D920", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600040F")]
		[Address(RVA = "0x4C8D930", Offset = "0x4C8D930", VA = "0x4C8D930", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000411")]
		[Address(RVA = "0x4C8E4C0", Offset = "0x4C8E4C0", VA = "0x4C8E4C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000411")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, bool> m_animations;

	[Token(Token = "0x4000412")]
	[FieldOffset(Offset = "0x28")]
	private TMP_Text m_TextComponent;

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x4C8D5C0", Offset = "0x4C8D5C0", VA = "0x4C8D5C0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x4C8D610", Offset = "0x4C8D610", VA = "0x4C8D610")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x4C8D620", Offset = "0x4C8D620", VA = "0x4C8D620")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x4C8D630", Offset = "0x4C8D630", VA = "0x4C8D630")]
	public void StopAllAnimations()
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x4C8D680", Offset = "0x4C8D680", VA = "0x4C8D680")]
	public void DoSpriteAnimation(int currentCharacter, TMP_SpriteAsset spriteAsset, int start, int end, int framerate)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x4C8D7C0", Offset = "0x4C8D7C0", VA = "0x4C8D7C0")]
	[IteratorStateMachine(typeof(_003CDoSpriteAnimationInternal_003Ed__7))]
	private IEnumerator DoSpriteAnimationInternal(int currentCharacter, TMP_SpriteAsset spriteAsset, int start, int end, int framerate)
	{
		return null;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x4C8D8A0", Offset = "0x4C8D8A0", VA = "0x4C8D8A0")]
	public TMP_SpriteAnimator()
	{
	}
}
