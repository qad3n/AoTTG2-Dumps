// ==================== AoTTG2 cross-reference ====================
// Type: TextureScaler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/TextureScaler.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/TextureScaler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x200000A")]
public class TextureScaler
{
	[Token(Token = "0x200000B")]
	public class ThreadData
	{
		[Token(Token = "0x4000019")]
		[FieldOffset(Offset = "0x10")]
		public Color[] TexColors;

		[Token(Token = "0x400001A")]
		[FieldOffset(Offset = "0x18")]
		public Color[] NewColors;

		[Token(Token = "0x400001B")]
		[FieldOffset(Offset = "0x20")]
		public int TexWidth;

		[Token(Token = "0x400001C")]
		[FieldOffset(Offset = "0x24")]
		public int TexHeight;

		[Token(Token = "0x400001D")]
		[FieldOffset(Offset = "0x28")]
		public int NewWidth;

		[Token(Token = "0x400001E")]
		[FieldOffset(Offset = "0x2C")]
		public int NewHeight;

		[Token(Token = "0x6000030")]
		[Address(RVA = "0x1DAF3E0", Offset = "0x1DAD9E0", VA = "0x181DAF3E0")]
		public ThreadData(Color[] texColors, Color[] newColors, int texWidth, int texHeight, int newWidth, int newHeight)
		{
		}
	}

	[Token(Token = "0x200000C")]
	[CompilerGenerated]
	private sealed class _003CScale_003Ed__1 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400001F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000020")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000021")]
		[FieldOffset(Offset = "0x20")]
		public Texture2D tex;

		[Token(Token = "0x4000022")]
		[FieldOffset(Offset = "0x28")]
		public int newWidth;

		[Token(Token = "0x4000023")]
		[FieldOffset(Offset = "0x2C")]
		public int newHeight;

		[Token(Token = "0x4000024")]
		[FieldOffset(Offset = "0x30")]
		private Color[] _003CnewColors_003E5__2;

		[Token(Token = "0x4000025")]
		[FieldOffset(Offset = "0x38")]
		private Thread _003Cthread_003E5__3;

		[Token(Token = "0x17000003")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000034")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000004")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000036")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CScale_003Ed__1(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000032")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000033")]
		[Address(RVA = "0x1DB0790", Offset = "0x1DAED90", VA = "0x181DB0790", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000035")]
		[Address(RVA = "0x1DB0A70", Offset = "0x1DAF070", VA = "0x181DB0A70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x1DAF370", Offset = "0x1DAD970", VA = "0x181DAF370")]
	[IteratorStateMachine(typeof(_003CScale_003Ed__1))]
	public static IEnumerator Scale(Texture2D tex, int newWidth, int newHeight)
	{
		return null;
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x1DAF190", Offset = "0x1DAD790", VA = "0x181DAF190")]
	public static void ScaleBlocking(Texture2D tex, int newWidth, int newHeight)
	{
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x1DAED30", Offset = "0x1DAD330", VA = "0x181DAED30")]
	public static void BilinearScale(object obj)
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x1DAF120", Offset = "0x1DAD720", VA = "0x181DAF120")]
	private static Color ColorLerpUnclamped(Color c1, Color c2, float value)
	{
		return default(Color);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TextureScaler()
	{
	}
}
