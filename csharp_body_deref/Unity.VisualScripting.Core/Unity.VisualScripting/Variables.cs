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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600115E")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003CGetAotStubs_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600115F")]
		[Address(RVA = "0x2E59790", Offset = "0x2E57D90", VA = "0x182E59790", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001160")]
		[Address(RVA = "0x2E59330", Offset = "0x2E57930", VA = "0x182E59330", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001161")]
		[Address(RVA = "0x2E59820", Offset = "0x2E57E20", VA = "0x182E59820")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001163")]
		[Address(RVA = "0x2E59750", Offset = "0x2E57D50", VA = "0x182E59750", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001165")]
		[Address(RVA = "0x2E596B0", Offset = "0x2E57CB0", VA = "0x182E596B0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001166")]
		[Address(RVA = "0x2E596B0", Offset = "0x2E57CB0", VA = "0x182E596B0", Slot = "5")]
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
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600114A")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170001F2")]
	public static VariableDeclarations ActiveScene
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x2E5C120", Offset = "0x2E5A720", VA = "0x182E5C120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F3")]
	public static VariableDeclarations Application
	{
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x2E5C1A0", Offset = "0x2E5A7A0", VA = "0x182E5C1A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	public static VariableDeclarations Saved
	{
		[Token(Token = "0x6001156")]
		[Address(RVA = "0x2E56CA0", Offset = "0x2E552A0", VA = "0x182E56CA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F5")]
	public static bool ExistInActiveScene
	{
		[Token(Token = "0x600115A")]
		[Address(RVA = "0x2E5C230", Offset = "0x2E5A830", VA = "0x182E5C230")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x2E5BBB0", Offset = "0x2E5A1B0", VA = "0x182E5BBB0")]
	public static VariableDeclarations Graph(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x2E5BB40", Offset = "0x2E5A140", VA = "0x182E5BB40")]
	public static VariableDeclarations GraphInstance(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x2E5BA30", Offset = "0x2E5A030", VA = "0x182E5BA30")]
	public static VariableDeclarations GraphDefinition(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x2E5BAF0", Offset = "0x2E5A0F0", VA = "0x182E5BAF0")]
	public static VariableDeclarations GraphDefinition(IGraphWithVariables graph)
	{
		return null;
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x2E5BD40", Offset = "0x2E5A340", VA = "0x182E5BD40")]
	public static VariableDeclarations Object(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x2E5BD90", Offset = "0x2E5A390", VA = "0x182E5BD90")]
	public static VariableDeclarations Object(UnityEngine.Component component)
	{
		return null;
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x2E5BEF0", Offset = "0x2E5A4F0", VA = "0x182E5BEF0")]
	public static VariableDeclarations Scene(Scene? scene)
	{
		return null;
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x2E5BDF0", Offset = "0x2E5A3F0", VA = "0x182E5BDF0")]
	public static VariableDeclarations Scene(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6001153")]
	[Address(RVA = "0x2E5BE60", Offset = "0x2E5A460", VA = "0x182E5BE60")]
	public static VariableDeclarations Scene(UnityEngine.Component component)
	{
		return null;
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x2E5B8A0", Offset = "0x2E59EA0", VA = "0x182E5B8A0")]
	public static bool ExistOnObject(GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x2E5B920", Offset = "0x2E59F20", VA = "0x182E5B920")]
	public static bool ExistOnObject(UnityEngine.Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x2E5B7F0", Offset = "0x2E59DF0", VA = "0x182E5B7F0")]
	public static bool ExistInScene(Scene? scene)
	{
		return default(bool);
	}

	[Token(Token = "0x600115B")]
	[Address(RVA = "0x2E5C090", Offset = "0x2E5A690", VA = "0x182E5C090", Slot = "10")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x600115C")]
	[Address(RVA = "0x2E5B9B0", Offset = "0x2E59FB0", VA = "0x182E5B9B0", Slot = "11")]
	[IteratorStateMachine(typeof(_003CGetAotStubs_003Ed__25))]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x600115D")]
	[Address(RVA = "0x2E5C0A0", Offset = "0x2E5A6A0", VA = "0x182E5C0A0")]
	public Variables()
	{
	}
}
