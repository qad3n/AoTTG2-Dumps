using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace GameManagers;

[Token(Token = "0x20001CF")]
internal class CharacterEditorGameManager : BaseGameManager
{
	[Token(Token = "0x20001D0")]
	[CompilerGenerated]
	private sealed class _003CGenerateHumanPreviewsCoroutine_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A09")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A0A")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A0B")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x4000A0C")]
		[FieldOffset(Offset = "0x28")]
		private HumanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x4000A0D")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4000A0E")]
		[FieldOffset(Offset = "0x38")]
		private List<BaseSetting>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4000A0F")]
		[FieldOffset(Offset = "0x50")]
		private HumanCustomSet _003Cpreset_003E5__5;

		[Token(Token = "0x17000128")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000A83")]
			[Address(RVA = "0x4113F60", Offset = "0x4113F60", VA = "0x4113F60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000129")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000A85")]
			[Address(RVA = "0x4113FB0", Offset = "0x4113FB0", VA = "0x4113FB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A7F")]
		[Address(RVA = "0x41114A0", Offset = "0x41114A0", VA = "0x41114A0")]
		[DebuggerHidden]
		public _003CGenerateHumanPreviewsCoroutine_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000A80")]
		[Address(RVA = "0x41117E0", Offset = "0x41117E0", VA = "0x41117E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000A81")]
		[Address(RVA = "0x4111840", Offset = "0x4111840", VA = "0x4111840", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A82")]
		[Address(RVA = "0x4113F20", Offset = "0x4113F20", VA = "0x4113F20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000A84")]
		[Address(RVA = "0x4113F70", Offset = "0x4113F70", VA = "0x4113F70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20001D1")]
	[CompilerGenerated]
	private sealed class _003CGenerateTitanPreviewsCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A10")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A11")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A12")]
		[FieldOffset(Offset = "0x20")]
		public CharacterEditorGameManager _003C_003E4__this;

		[Token(Token = "0x4000A13")]
		[FieldOffset(Offset = "0x28")]
		private TitanCustomSet _003Cset_003E5__2;

		[Token(Token = "0x4000A14")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x4000A15")]
		[FieldOffset(Offset = "0x38")]
		private List<string>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x4000A16")]
		[FieldOffset(Offset = "0x50")]
		private string _003Chair_003E5__5;

		[Token(Token = "0x1700012A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000A8A")]
			[Address(RVA = "0x4114AE0", Offset = "0x4114AE0", VA = "0x4114AE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700012B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000A8C")]
			[Address(RVA = "0x4114B30", Offset = "0x4114B30", VA = "0x4114B30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A86")]
		[Address(RVA = "0x41114C0", Offset = "0x41114C0", VA = "0x41114C0")]
		[DebuggerHidden]
		public _003CGenerateTitanPreviewsCoroutine_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000A87")]
		[Address(RVA = "0x4113FC0", Offset = "0x4113FC0", VA = "0x4113FC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000A88")]
		[Address(RVA = "0x4114010", Offset = "0x4114010", VA = "0x4114010", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A89")]
		[Address(RVA = "0x4114AA0", Offset = "0x4114AA0", VA = "0x4114AA0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000A8B")]
		[Address(RVA = "0x4114AF0", Offset = "0x4114AF0", VA = "0x4114AF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000A03")]
	[FieldOffset(Offset = "0x0")]
	public static bool HumanMode;

	[Token(Token = "0x4000A04")]
	[FieldOffset(Offset = "0x28")]
	public DummyHuman Human;

	[Token(Token = "0x4000A05")]
	[FieldOffset(Offset = "0x30")]
	public DummyTitan Titan;

	[Token(Token = "0x4000A06")]
	[FieldOffset(Offset = "0x38")]
	public DummyCharacter Character;

	[Token(Token = "0x4000A07")]
	[FieldOffset(Offset = "0x8")]
	private static string PreviewFolderPath;

	[Token(Token = "0x4000A08")]
	[FieldOffset(Offset = "0x40")]
	private GameObject platform;

	[Token(Token = "0x6000A77")]
	[Address(RVA = "0x41107D0", Offset = "0x41107D0", VA = "0x41107D0", Slot = "54")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6000A78")]
	[Address(RVA = "0x4110BB0", Offset = "0x4110BB0", VA = "0x4110BB0")]
	public void ReinstantiateCharacter()
	{
	}

	[Token(Token = "0x6000A79")]
	[Address(RVA = "0x4111270", Offset = "0x4111270", VA = "0x4111270")]
	public void GeneratePreviews()
	{
	}

	[Token(Token = "0x6000A7A")]
	[Address(RVA = "0x41113C0", Offset = "0x41113C0", VA = "0x41113C0")]
	[IteratorStateMachine(typeof(_003CGenerateHumanPreviewsCoroutine_003Ed__9))]
	private IEnumerator GenerateHumanPreviewsCoroutine()
	{
		return null;
	}

	[Token(Token = "0x6000A7B")]
	[Address(RVA = "0x4111430", Offset = "0x4111430", VA = "0x4111430")]
	[IteratorStateMachine(typeof(_003CGenerateTitanPreviewsCoroutine_003Ed__10))]
	private IEnumerator GenerateTitanPreviewsCoroutine()
	{
		return null;
	}

	[Token(Token = "0x6000A7C")]
	[Address(RVA = "0x41114E0", Offset = "0x41114E0", VA = "0x41114E0")]
	private void Screenshot(float x, float y, float w, float h, string file)
	{
	}

	[Token(Token = "0x6000A7D")]
	[Address(RVA = "0x4111720", Offset = "0x4111720", VA = "0x4111720")]
	public CharacterEditorGameManager()
	{
	}
}
