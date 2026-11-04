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

[Token(Token = "0x2000072")]
[DisallowMultipleComponent]
[TMPro.TMPHelpURL("index")]
public class TMP_SpriteAnimator : MonoBehaviour
{
	[Token(Token = "0x2000073")]
	[CompilerGenerated]
	private sealed class _003CDoSpriteAnimationInternal_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000383")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000384")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000385")]
		[FieldOffset(Offset = "0x20")]
		public TMP_SpriteAnimator _003C_003E4__this;

		[Token(Token = "0x4000386")]
		[FieldOffset(Offset = "0x28")]
		public int start;

		[Token(Token = "0x4000387")]
		[FieldOffset(Offset = "0x2C")]
		public int end;

		[Token(Token = "0x4000388")]
		[FieldOffset(Offset = "0x30")]
		public TMP_SpriteAsset spriteAsset;

		[Token(Token = "0x4000389")]
		[FieldOffset(Offset = "0x38")]
		public int currentCharacter;

		[Token(Token = "0x400038A")]
		[FieldOffset(Offset = "0x3C")]
		public int framerate;

		[Token(Token = "0x400038B")]
		[FieldOffset(Offset = "0x40")]
		private int _003CcurrentFrame_003E5__2;

		[Token(Token = "0x400038C")]
		[FieldOffset(Offset = "0x48")]
		private TMP_CharacterInfo _003CcharInfo_003E5__3;

		[Token(Token = "0x400038D")]
		[FieldOffset(Offset = "0x1C0")]
		private int _003CmaterialIndex_003E5__4;

		[Token(Token = "0x400038E")]
		[FieldOffset(Offset = "0x1C4")]
		private int _003CvertexIndex_003E5__5;

		[Token(Token = "0x400038F")]
		[FieldOffset(Offset = "0x1C8")]
		private TMP_MeshInfo _003CmeshInfo_003E5__6;

		[Token(Token = "0x4000390")]
		[FieldOffset(Offset = "0x218")]
		private float _003CbaseSpriteScale_003E5__7;

		[Token(Token = "0x4000391")]
		[FieldOffset(Offset = "0x21C")]
		private float _003CelapsedTime_003E5__8;

		[Token(Token = "0x4000392")]
		[FieldOffset(Offset = "0x220")]
		private float _003CtargetTime_003E5__9;

		[Token(Token = "0x170000E4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60003B4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000E5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60003B6")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CDoSpriteAnimationInternal_003Ed__7(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x2D47D80", Offset = "0x2D46380", VA = "0x182D47D80", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x2D48A60", Offset = "0x2D47060", VA = "0x182D48A60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, bool> m_animations;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x28")]
	private TMP_Text m_TextComponent;

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x2D40390", Offset = "0x2D3E990", VA = "0x182D40390")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x2D405B0", Offset = "0x2D3EBB0", VA = "0x182D405B0")]
	public void StopAllAnimations()
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x2D40480", Offset = "0x2D3EA80", VA = "0x182D40480")]
	public void DoSpriteAnimation(int currentCharacter, TMP_SpriteAsset spriteAsset, int start, int end, int framerate)
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x2D403E0", Offset = "0x2D3E9E0", VA = "0x182D403E0")]
	[IteratorStateMachine(typeof(_003CDoSpriteAnimationInternal_003Ed__7))]
	private IEnumerator DoSpriteAnimationInternal(int currentCharacter, TMP_SpriteAsset spriteAsset, int start, int end, int framerate)
	{
		return null;
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x2D40600", Offset = "0x2D3EC00", VA = "0x182D40600")]
	public TMP_SpriteAnimator()
	{
	}
}
