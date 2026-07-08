using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000008")]
public class TextureScaler
{
	[Token(Token = "0x2000009")]
	public class ThreadData
	{
		[Token(Token = "0x400000F")]
		[FieldOffset(Offset = "0x10")]
		public Color[] TexColors;

		[Token(Token = "0x4000010")]
		[FieldOffset(Offset = "0x18")]
		public Color[] NewColors;

		[Token(Token = "0x4000011")]
		[FieldOffset(Offset = "0x20")]
		public int TexWidth;

		[Token(Token = "0x4000012")]
		[FieldOffset(Offset = "0x24")]
		public int TexHeight;

		[Token(Token = "0x4000013")]
		[FieldOffset(Offset = "0x28")]
		public int NewWidth;

		[Token(Token = "0x4000014")]
		[FieldOffset(Offset = "0x2C")]
		public int NewHeight;

		[Token(Token = "0x6000023")]
		[Address(RVA = "0x3C66420", Offset = "0x3C66420", VA = "0x3C66420")]
		public ThreadData(Color[] texColors, Color[] newColors, int texWidth, int texHeight, int newWidth, int newHeight)
		{
		}
	}

	[Token(Token = "0x200000A")]
	[CompilerGenerated]
	private sealed class _003CScale_003Ed__1 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000015")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000016")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000017")]
		[FieldOffset(Offset = "0x20")]
		public Texture2D tex;

		[Token(Token = "0x4000018")]
		[FieldOffset(Offset = "0x28")]
		public int newWidth;

		[Token(Token = "0x4000019")]
		[FieldOffset(Offset = "0x2C")]
		public int newHeight;

		[Token(Token = "0x400001A")]
		[FieldOffset(Offset = "0x30")]
		private Color[] _003CnewColors_003E5__2;

		[Token(Token = "0x400001B")]
		[FieldOffset(Offset = "0x38")]
		private Thread _003Cthread_003E5__3;

		[Token(Token = "0x17000001")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000027")]
			[Address(RVA = "0x3C66A80", Offset = "0x3C66A80", VA = "0x3C66A80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000002")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000029")]
			[Address(RVA = "0x3C66AD0", Offset = "0x3C66AD0", VA = "0x3C66AD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000024")]
		[Address(RVA = "0x3C66220", Offset = "0x3C66220", VA = "0x3C66220")]
		[DebuggerHidden]
		public _003CScale_003Ed__1(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000025")]
		[Address(RVA = "0x3C667A0", Offset = "0x3C667A0", VA = "0x3C667A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000026")]
		[Address(RVA = "0x3C667B0", Offset = "0x3C667B0", VA = "0x3C667B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000028")]
		[Address(RVA = "0x3C66A90", Offset = "0x3C66A90", VA = "0x3C66A90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3C66190", Offset = "0x3C66190", VA = "0x3C66190")]
	[IteratorStateMachine(typeof(_003CScale_003Ed__1))]
	public static IEnumerator Scale(Texture2D tex, int newWidth, int newHeight)
	{
		return null;
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3C66240", Offset = "0x3C66240", VA = "0x3C66240")]
	public static void ScaleBlocking(Texture2D tex, int newWidth, int newHeight)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3C66490", Offset = "0x3C66490", VA = "0x3C66490")]
	public static void BilinearScale(object obj)
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x3C66770", Offset = "0x3C66770", VA = "0x3C66770")]
	private static Color ColorLerpUnclamped(Color c1, Color c2, float value)
	{
		return default(Color);
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3C66790", Offset = "0x3C66790", VA = "0x3C66790")]
	public TextureScaler()
	{
	}
}
