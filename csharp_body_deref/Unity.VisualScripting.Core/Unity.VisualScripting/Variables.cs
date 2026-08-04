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
		[Token(Token = "0x4000956")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000957")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000958")]
		[FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000959")]
		[FieldOffset(Offset = "0x28")]
		public Variables _003C_003E4__this;

		[Token(Token = "0x400095A")]
		[FieldOffset(Offset = "0x30")]
		private IEnumerator<VariableDeclaration> _003C_003E7__wrap1;

		[Token(Token = "0x170001F3")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6001155")]
			[Address(RVA = "0x4D68670", Offset = "0x4D68670", VA = "0x4D68670", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001F4")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6001157")]
			[Address(RVA = "0x4D686C0", Offset = "0x4D686C0", VA = "0x4D686C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001151")]
		[Address(RVA = "0x4D67F30", Offset = "0x4D67F30", VA = "0x4D67F30")]
		[DebuggerHidden]
		public _003CGetAotStubs_003Ed__25(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001152")]
		[Address(RVA = "0x4D68040", Offset = "0x4D68040", VA = "0x4D68040", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001153")]
		[Address(RVA = "0x4D680F0", Offset = "0x4D680F0", VA = "0x4D680F0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001154")]
		[Address(RVA = "0x4D685D0", Offset = "0x4D685D0", VA = "0x4D685D0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001156")]
		[Address(RVA = "0x4D68680", Offset = "0x4D68680", VA = "0x4D68680", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6001158")]
		[Address(RVA = "0x4D686D0", Offset = "0x4D686D0", VA = "0x4D686D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<object> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002EObject_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6001159")]
		[Address(RVA = "0x4D68770", Offset = "0x4D68770", VA = "0x4D68770", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x170001EE")]
	[Serialize]
	[Inspectable]
	public VariableDeclarations declarations
	{
		[Token(Token = "0x600113C")]
		[Address(RVA = "0x4D67620", Offset = "0x4D67620", VA = "0x4D67620")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600113D")]
		[Address(RVA = "0x4D67630", Offset = "0x4D67630", VA = "0x4D67630")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170001EF")]
	public static VariableDeclarations ActiveScene
	{
		[Token(Token = "0x6001147")]
		[Address(RVA = "0x4D67AE0", Offset = "0x4D67AE0", VA = "0x4D67AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F0")]
	public static VariableDeclarations Application
	{
		[Token(Token = "0x6001148")]
		[Address(RVA = "0x4D67B50", Offset = "0x4D67B50", VA = "0x4D67B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F1")]
	public static VariableDeclarations Saved
	{
		[Token(Token = "0x6001149")]
		[Address(RVA = "0x4D67BF0", Offset = "0x4D67BF0", VA = "0x4D67BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F2")]
	public static bool ExistInActiveScene
	{
		[Token(Token = "0x600114D")]
		[Address(RVA = "0x4D67E30", Offset = "0x4D67E30", VA = "0x4D67E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x4D67640", Offset = "0x4D67640", VA = "0x4D67640")]
	public static VariableDeclarations Graph(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x4D676E0", Offset = "0x4D676E0", VA = "0x4D676E0")]
	public static VariableDeclarations GraphInstance(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x4D677A0", Offset = "0x4D677A0", VA = "0x4D677A0")]
	public static VariableDeclarations GraphDefinition(GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x4D678B0", Offset = "0x4D678B0", VA = "0x4D678B0")]
	public static VariableDeclarations GraphDefinition(IGraphWithVariables graph)
	{
		return null;
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x4D67940", Offset = "0x4D67940", VA = "0x4D67940")]
	public static VariableDeclarations Object(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6001143")]
	[Address(RVA = "0x4D67990", Offset = "0x4D67990", VA = "0x4D67990")]
	public static VariableDeclarations Object(Component component)
	{
		return null;
	}

	[Token(Token = "0x6001144")]
	[Address(RVA = "0x4D679E0", Offset = "0x4D679E0", VA = "0x4D679E0")]
	public static VariableDeclarations Scene(Scene? scene)
	{
		return null;
	}

	[Token(Token = "0x6001145")]
	[Address(RVA = "0x4D679F0", Offset = "0x4D679F0", VA = "0x4D679F0")]
	public static VariableDeclarations Scene(GameObject go)
	{
		return null;
	}

	[Token(Token = "0x6001146")]
	[Address(RVA = "0x4D67A60", Offset = "0x4D67A60", VA = "0x4D67A60")]
	public static VariableDeclarations Scene(Component component)
	{
		return null;
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x4D67C90", Offset = "0x4D67C90", VA = "0x4D67C90")]
	public static bool ExistOnObject(GameObject go)
	{
		return default(bool);
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x4D67D00", Offset = "0x4D67D00", VA = "0x4D67D00")]
	public static bool ExistOnObject(Component component)
	{
		return default(bool);
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x4D67D80", Offset = "0x4D67D80", VA = "0x4D67D80")]
	public static bool ExistInScene(Scene? scene)
	{
		return default(bool);
	}

	[Token(Token = "0x600114E")]
	[Address(RVA = "0x4D67EA0", Offset = "0x4D67EA0", VA = "0x4D67EA0", Slot = "10")]
	[ContextMenu("Show Data...")]
	protected override void ShowData()
	{
	}

	[Token(Token = "0x600114F")]
	[Address(RVA = "0x4D67EB0", Offset = "0x4D67EB0", VA = "0x4D67EB0", Slot = "11")]
	[IteratorStateMachine(typeof(_003CGetAotStubs_003Ed__25))]
	public IEnumerable<object> GetAotStubs(HashSet<object> visited)
	{
		return null;
	}

	[Token(Token = "0x6001150")]
	[Address(RVA = "0x4D67F60", Offset = "0x4D67F60", VA = "0x4D67F60")]
	public Variables()
	{
	}
}
