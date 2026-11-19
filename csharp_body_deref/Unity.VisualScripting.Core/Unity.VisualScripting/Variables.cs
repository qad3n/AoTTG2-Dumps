// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Variables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Unity.VisualScripting;

[Token(Token = "0x20001D8")]
[AddComponentMenu("Visual Scripting/Variables")]
[DisableAnnotation]
[IncludeInSettings(false)]
public class Variables : LudiqBehaviour, IAotStubbable
{
	[Token(Token = "0x20001D9")]
	[CompilerGenerated]
	private sealed class _003CGetAotStubs_003Ed__25 : IEnumerable<object>, IEnumerable, IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000954")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000955")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000956")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000957")]
		[FieldOffset(Offset = "0x28")]
		public Variables _003C_003E4__this;

		[Token(Token = "0x4000958")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerator<VariableDeclaration> _003C_003E7__wrap1;

		[Token(Token = "0x170001F6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001162")]
			[Address(RVA = "0x68525B0", Offset = "0x68515B0", VA = "0x68525B0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001F7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001164")]
			[Address(RVA = "0x6852600", Offset = "0x6851600", VA = "0x6852600", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600115E")]
		[Address(RVA = "0x6851E10", Offset = "0x6850E10", VA = "0x6851E10")]
		[DebuggerHidden]
		public _003CGetAotStubs_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600115F")]
		[Address(RVA = "0x6851F20", Offset = "0x6850F20", VA = "0x6851F20", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001160")]
		[Address(RVA = "0x6851FD0", Offset = "0x6850FD0", VA = "0x6851FD0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001161")]
		[Address(RVA = "0x6852510", Offset = "0x6851510", VA = "0x6852510")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001163")]
		[Address(RVA = "0x68525C0", Offset = "0x68515C0", VA = "0x68525C0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001165")]
		[Address(RVA = "0x6852610", Offset = "0x6851610", VA = "0x6852610", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001166")]
		[Address(RVA = "0x68526B0", Offset = "0x68516B0", VA = "0x68526B0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x170001F1")]
	[Serialize]
	[Inspectable]
	public VariableDeclarations declarations
	{
		[Token(Token = "0x6001149")]
		[Address(RVA = "0x6851500", Offset = "0x6850500", VA = "0x6851500")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600114A")]
		[Address(RVA = "0x6851510", Offset = "0x6850510", VA = "0x6851510")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170001F2")]
	public static VariableDeclarations ActiveScene
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x68519D0", Offset = "0x68509D0", VA = "0x68519D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F3")]
	public static VariableDeclarations Application
	{
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x6851A40", Offset = "0x6850A40", VA = "0x6851A40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	public static VariableDeclarations Saved
	{
		[Token(Token = "0x6001156")]
		[Address(RVA = "0x6851AE0", Offset = "0x6850AE0", VA = "0x6851AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F5")]
	public static bool ExistInActiveScene
	{
		[Token(Token = "0x600115A")]
		[Address(RVA = "0x6851D20", Offset = "0x6850D20", VA = "0x6851D20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x6851520", Offset = "0x6850520", VA = "0x6851520")]
	public static VariableDeclarations Graph(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x68515D0", Offset = "0x68505D0", VA = "0x68515D0")]
	public static VariableDeclarations GraphInstance(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x6851690", Offset = "0x6850690", VA = "0x6851690")]
	public static VariableDeclarations GraphDefinition(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x68517A0", Offset = "0x68507A0", VA = "0x68517A0")]
	public static VariableDeclarations GraphDefinition(IGraphWithVariables graph)
	{
		return null;
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x6851830", Offset = "0x6850830", VA = "0x6851830")]
	public static VariableDeclarations Object(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x6851880", Offset = "0x6850880", VA = "0x6851880")]
	public static VariableDeclarations Object(UnityEngine.Component component)
	{
		return null;
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x68518D0", Offset = "0x68508D0", VA = "0x68518D0")]
	public static VariableDeclarations Scene(Scene? scene)
	{
		return null;
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x68518E0", Offset = "0x68508E0", VA = "0x68518E0")]
	public static VariableDeclarations Scene(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x6851950", Offset = "0x6850950", VA = "0x6851950")]
	public static VariableDeclarations Scene(UnityEngine.Component component)
	{
		return null;
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x6851B80", Offset = "0x6850B80", VA = "0x6851B80")]
	public static bool ExistOnObject(GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x6851BF0", Offset = "0x6850BF0", VA = "0x6851BF0")]
	public static bool ExistOnObject(UnityEngine.Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x6851C70", Offset = "0x6850C70", VA = "0x6851C70")]
	public static bool ExistInScene(Scene? scene)
	{
		return default(bool);
	}

	[Token(Token = "0x600115B")]
	[Address(RVA = "0x6851D90", Offset = "0x6850D90", VA = "0x6851D90", Slot = "10")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x6851DA0", Offset = "0x6850DA0", VA = "0x6851DA0", Slot = "11")]
	[IteratorStateMachine(typeof(_003CGetAotStubs_003Ed__25))]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x600115D")]
	[Address(RVA = "0x6851E40", Offset = "0x6850E40", VA = "0x6851E40")]
	public Variables()
	{
	}
}
