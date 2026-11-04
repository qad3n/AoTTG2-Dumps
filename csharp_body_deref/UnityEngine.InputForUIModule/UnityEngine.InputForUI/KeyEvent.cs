// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.KeyEvent
// Update status: NEW in this game update
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
using Unity.IntegerTime;
using UnityEngine.Bindings;

namespace UnityEngine.InputForUI;

[Token(Token = "0x2000010")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal struct KeyEvent : IEventProperties
{
	[Token(Token = "0x2000011")]
	public enum Type
	{
		[Token(Token = "0x400005A")]
		KeyPressed = 1,
		[Token(Token = "0x400005B")]
		KeyRepeated,
		[Token(Token = "0x400005C")]
		KeyReleased,
		[Token(Token = "0x400005D")]
		State
	}

	[Token(Token = "0x2000012")]
	public struct ButtonsState
	{
		[Token(Token = "0x2000013")]
		[CompilerGenerated]
		private sealed class _003CGetAllPressed_003Ed__8 : IEnumerable<KeyCode>, IEnumerable, IEnumerator<KeyCode>, IEnumerator, IDisposable
		{
			[Token(Token = "0x400005F")]
			[FieldOffset(Offset = "0x10")]
			private int _003C_003E1__state;

			[Token(Token = "0x4000060")]
			[FieldOffset(Offset = "0x14")]
			private KeyCode _003C_003E2__current;

			[Token(Token = "0x4000061")]
			[FieldOffset(Offset = "0x18")]
			private int _003C_003El__initialThreadId;

			[Token(Token = "0x4000062")]
			[FieldOffset(Offset = "0x1C")]
			public ButtonsState _003C_003E4__this;

			[Token(Token = "0x4000063")]
			[FieldOffset(Offset = "0x44")]
			public ButtonsState _003C_003E3___003C_003E4__this;

			[Token(Token = "0x4000064")]
			[FieldOffset(Offset = "0x6C")]
			private uint _003Cindex_003E5__1;

			[Token(Token = "0x17000020")]
			private KeyCode System_002ECollections_002EGeneric_002EIEnumerator_003CUnityEngine_002EKeyCode_003E_002ECurrent
			{
				[Token(Token = "0x6000049")]
				[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "6")]
				[DebuggerHidden]
				get
				{
					return default(KeyCode);
				}
			}

			[Token(Token = "0x17000021")]
			private object System_002ECollections_002EIEnumerator_002ECurrent
			{
				[Token(Token = "0x600004B")]
				[Address(RVA = "0x2FC32B0", Offset = "0x2FC18B0", VA = "0x182FC32B0", Slot = "9")]
				[DebuggerHidden]
				get
				{
					return null;
				}
			}

			[Token(Token = "0x6000046")]
			[Address(RVA = "0x8E81F0", Offset = "0x8E67F0", VA = "0x1808E81F0")]
			[DebuggerHidden]
			public _003CGetAllPressed_003Ed__8(int _003C_003E1__state)
			{
			}

			[Token(Token = "0x6000047")]
			[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
			[DebuggerHidden]
			private void System_002EIDisposable_002EDispose()
			{
			}

			[Token(Token = "0x6000048")]
			[Address(RVA = "0x2FC3160", Offset = "0x2FC1760", VA = "0x182FC3160", Slot = "8")]
			private bool MoveNext()
			{
				return default(bool);
			}

			[Token(Token = "0x600004A")]
			[Address(RVA = "0x2FC3270", Offset = "0x2FC1870", VA = "0x182FC3270", Slot = "10")]
			[DebuggerHidden]
			private void System_002ECollections_002EIEnumerator_002EReset()
			{
			}

			[Token(Token = "0x600004C")]
			[Address(RVA = "0x2FC31C0", Offset = "0x2FC17C0", VA = "0x182FC31C0", Slot = "4")]
			[DebuggerHidden]
			private IEnumerator<KeyCode> System_002ECollections_002EGeneric_002EIEnumerable_003CUnityEngine_002EKeyCode_003E_002EGetEnumerator()
			{
				return null;
			}

			[Token(Token = "0x600004D")]
			[Address(RVA = "0x2FC31C0", Offset = "0x2FC17C0", VA = "0x182FC31C0", Slot = "5")]
			[DebuggerHidden]
			private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
			{
				return null;
			}
		}

		[Token(Token = "0x400005E")]
		[FieldOffset(Offset = "0x0")]
		private unsafe fixed byte buttons[40];

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x2FB9DD0", Offset = "0x2FB83D0", VA = "0x182FB9DD0")]
		internal static bool ShouldBeProcessed(KeyCode keyCode)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600003E")]
		[Address(RVA = "0x2FB9D00", Offset = "0x2FB8300", VA = "0x182FB9D00")]
		private bool GetUnchecked(uint index)
		{
			return default(bool);
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x2FB9DB0", Offset = "0x2FB83B0", VA = "0x182FB9DB0")]
		private void SetUnchecked(uint index)
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000040")]
		[Address(RVA = "0x2FB9C60", Offset = "0x2FB8260", VA = "0x182FB9C60")]
		private void ClearUnchecked(uint index)
		{
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x2FB9D30", Offset = "0x2FB8330", VA = "0x182FB9D30")]
		public bool IsPressed(KeyCode keyCode)
		{
			return default(bool);
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x2FB9C80", Offset = "0x2FB8280", VA = "0x182FB9C80")]
		[IteratorStateMachine(typeof(_003CGetAllPressed_003Ed__8))]
		public IEnumerable<KeyCode> GetAllPressed()
		{
			return null;
		}

		[Token(Token = "0x6000043")]
		[Address(RVA = "0x2FB9D80", Offset = "0x2FB8380", VA = "0x182FB9D80")]
		public void SetPressed(KeyCode keyCode, bool pressed)
		{
		}

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x2FB9D60", Offset = "0x2FB8360", VA = "0x182FB9D60")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x2FB9DE0", Offset = "0x2FB83E0", VA = "0x182FB9DE0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x0")]
	public Type type;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x4")]
	public KeyCode keyCode;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x8")]
	public ButtonsState buttonsState;

	[Token(Token = "0x1700001C")]
	public DiscreteTime timestamp
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x1C61410", Offset = "0x1C5FA10", VA = "0x181C61410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public EventSource eventSource
	{
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0", Slot = "4")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventSource);
		}
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public uint playerId
	{
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public EventModifiers eventModifiers
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0", Slot = "5")]
		[CompilerGenerated]
		readonly get
		{
			return default(EventModifiers);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2FC1540", Offset = "0x2FBFB40", VA = "0x182FC1540", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
