using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using System.Xml;
using Il2CppDummyDll;

namespace CustomLogic.Editor;

[Token(Token = "0x200046D")]
public static class XmlDocumentUtils
{
	[Token(Token = "0x2000471")]
	[CompilerGenerated]
	private sealed class _003CGetConstructorParamTexts_003Ed__10 : IEnumerable<KeyValuePair<string, string>>, IEnumerable, IEnumerator<KeyValuePair<string, string>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400136A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400136B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, string> _003C_003E2__current;

		[Token(Token = "0x400136C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400136D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private ConstructorInfo ctorInfo;

		[Token(Token = "0x400136E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public ConstructorInfo _003C_003E3__ctorInfo;

		[Token(Token = "0x400136F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Type type;

		[Token(Token = "0x4001370")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Type _003C_003E3__type;

		[Token(Token = "0x4001371")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private XmlDocument xmlDocument;

		[Token(Token = "0x4001372")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public XmlDocument _003C_003E3__xmlDocument;

		[Token(Token = "0x4001373")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x1700090B")]
		private KeyValuePair<string, string> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002ECurrent
		{
			[Token(Token = "0x6002F9A")]
			[Address(RVA = "0x3E78E40", Offset = "0x3E78E40", VA = "0x3E78E40", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<string, string>);
			}
		}

		[Token(Token = "0x1700090C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002F9C")]
			[Address(RVA = "0x3E78E90", Offset = "0x3E78E90", VA = "0x3E78E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F96")]
		[Address(RVA = "0x3E779F0", Offset = "0x3E779F0", VA = "0x3E779F0")]
		[DebuggerHidden]
		public _003CGetConstructorParamTexts_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002F97")]
		[Address(RVA = "0x3E78550", Offset = "0x3E78550", VA = "0x3E78550", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002F98")]
		[Address(RVA = "0x3E78620", Offset = "0x3E78620", VA = "0x3E78620", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002F99")]
		[Address(RVA = "0x3E78D80", Offset = "0x3E78D80", VA = "0x3E78D80")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002F9B")]
		[Address(RVA = "0x3E78E50", Offset = "0x3E78E50", VA = "0x3E78E50", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6002F9D")]
		[Address(RVA = "0x3E78EE0", Offset = "0x3E78EE0", VA = "0x3E78EE0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<KeyValuePair<string, string>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002F9E")]
		[Address(RVA = "0x3E78FA0", Offset = "0x3E78FA0", VA = "0x3E78FA0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x2000472")]
	[CompilerGenerated]
	private sealed class _003CGetMethodParamTexts_003Ed__9 : IEnumerable<KeyValuePair<string, string>>, IEnumerable, IEnumerator<KeyValuePair<string, string>>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001374")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001375")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private KeyValuePair<string, string> _003C_003E2__current;

		[Token(Token = "0x4001376")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4001377")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private MethodInfo methodInfo;

		[Token(Token = "0x4001378")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public MethodInfo _003C_003E3__methodInfo;

		[Token(Token = "0x4001379")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private Type type;

		[Token(Token = "0x400137A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public Type _003C_003E3__type;

		[Token(Token = "0x400137B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private XmlDocument xmlDocument;

		[Token(Token = "0x400137C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public XmlDocument _003C_003E3__xmlDocument;

		[Token(Token = "0x400137D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x1700090D")]
		private KeyValuePair<string, string> System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002ECurrent
		{
			[Token(Token = "0x6002FA3")]
			[Address(RVA = "0x3E798E0", Offset = "0x3E798E0", VA = "0x3E798E0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(KeyValuePair<string, string>);
			}
		}

		[Token(Token = "0x1700090E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6002FA5")]
			[Address(RVA = "0x3E79930", Offset = "0x3E79930", VA = "0x3E79930", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6002F9F")]
		[Address(RVA = "0x3E77910", Offset = "0x3E77910", VA = "0x3E77910")]
		[DebuggerHidden]
		public _003CGetMethodParamTexts_003Ed__9(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6002FA0")]
		[Address(RVA = "0x3E78FB0", Offset = "0x3E78FB0", VA = "0x3E78FB0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6002FA1")]
		[Address(RVA = "0x3E79080", Offset = "0x3E79080", VA = "0x3E79080", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6002FA2")]
		[Address(RVA = "0x3E79820", Offset = "0x3E79820", VA = "0x3E79820")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6002FA4")]
		[Address(RVA = "0x3E798F0", Offset = "0x3E798F0", VA = "0x3E798F0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6002FA6")]
		[Address(RVA = "0x3E79980", Offset = "0x3E79980", VA = "0x3E79980", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<KeyValuePair<string, string>> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ECollections_002EGeneric_002EKeyValuePair_003CSystem_002EString_002CSystem_002EString_003E_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6002FA7")]
		[Address(RVA = "0x3E79A40", Offset = "0x3E79A40", VA = "0x3E79A40", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000473")]
	[CompilerGenerated]
	private struct _003CResolveAndReplaceInheritDocNodeAsync_003Ed__4 : IAsyncStateMachine
	{
		[Token(Token = "0x400137E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400137F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4001380")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Action<string> logError;

		[Token(Token = "0x4001381")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public XmlDocument xmlDocument;

		[Token(Token = "0x4001382")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private IEnumerator _003C_003E7__wrap1;

		[Token(Token = "0x4001383")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private YieldAwaitable.YieldAwaiter _003C_003Eu__1;

		[Token(Token = "0x4001384")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private TaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6002FA8")]
		[Address(RVA = "0x3E79A50", Offset = "0x3E79A50", VA = "0x3E79A50", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6002FA9")]
		[Address(RVA = "0x3E7A5D0", Offset = "0x3E7A5D0", VA = "0x3E7A5D0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4001361")]
	public const string XmlPath = "Temp/Bin/Debug";

	[Token(Token = "0x4001362")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<string> _priorityXml;

	[Token(Token = "0x6002F7C")]
	[Address(RVA = "0x3E76A80", Offset = "0x3E76A80", VA = "0x3E76A80")]
	public static XmlDocument LoadXml(string path)
	{
		return null;
	}

	[Token(Token = "0x6002F7D")]
	[Address(RVA = "0x3E76AF0", Offset = "0x3E76AF0", VA = "0x3E76AF0")]
	private static XmlNode TryResolve(string cref, string file)
	{
		return null;
	}

	[Token(Token = "0x6002F7E")]
	[Address(RVA = "0x3E76C10", Offset = "0x3E76C10", VA = "0x3E76C10")]
	[AsyncStateMachine(typeof(_003CResolveAndReplaceInheritDocNodeAsync_003Ed__4))]
	public static Task ResolveAndReplaceInheritDocNodeAsync(XmlDocument xmlDocument, [Optional] Action<string> logError)
	{
		return null;
	}

	[Token(Token = "0x6002F7F")]
	[Address(RVA = "0x3E76D20", Offset = "0x3E76D20", VA = "0x3E76D20")]
	private static XmlNode ResolveInheritDoc(string cref)
	{
		return null;
	}

	[Token(Token = "0x6002F80")]
	[Address(RVA = "0x3E77060", Offset = "0x3E77060", VA = "0x3E77060")]
	public static string GetTypeNodeText(XmlDocument xmlDocument, Type type, string nodeType, string defaultText = "")
	{
		return null;
	}

	[Token(Token = "0x6002F81")]
	[Address(RVA = "0x3E77270", Offset = "0x3E77270", VA = "0x3E77270")]
	public static string GetConstructorNodeText(XmlDocument xmlDocument, Type type, ConstructorInfo ctorInfo, string nodeType, string defaultText = "")
	{
		return null;
	}

	[Token(Token = "0x6002F82")]
	[Address(RVA = "0x3E77550", Offset = "0x3E77550", VA = "0x3E77550")]
	public static string GetMethodNodeText(XmlDocument xmlDocument, Type type, MethodInfo methodInfo, string nodeType, string defaultText = "")
	{
		return null;
	}

	[Token(Token = "0x6002F83")]
	[Address(RVA = "0x3E77860", Offset = "0x3E77860", VA = "0x3E77860")]
	[IteratorStateMachine(typeof(_003CGetMethodParamTexts_003Ed__9))]
	public static IEnumerable<KeyValuePair<string, string>> GetMethodParamTexts(XmlDocument xmlDocument, Type type, MethodInfo methodInfo)
	{
		return null;
	}

	[Token(Token = "0x6002F84")]
	[Address(RVA = "0x3E77940", Offset = "0x3E77940", VA = "0x3E77940")]
	[IteratorStateMachine(typeof(_003CGetConstructorParamTexts_003Ed__10))]
	public static IEnumerable<KeyValuePair<string, string>> GetConstructorParamTexts(XmlDocument xmlDocument, Type type, ConstructorInfo ctorInfo)
	{
		return null;
	}

	[Token(Token = "0x6002F85")]
	[Address(RVA = "0x3E77A20", Offset = "0x3E77A20", VA = "0x3E77A20")]
	public static string GetParameterNodeText(XmlDocument xmlDocument, Type type, MethodInfo methodInfo, ParameterInfo parameterInfo, string defaultText = "")
	{
		return null;
	}

	[Token(Token = "0x6002F86")]
	[Address(RVA = "0x3E77B60", Offset = "0x3E77B60", VA = "0x3E77B60")]
	public static string GetParameterNodeText(XmlDocument xmlDocument, Type type, ConstructorInfo ctorInfo, ParameterInfo parameterInfo, string defaultText = "")
	{
		return null;
	}

	[Token(Token = "0x6002F87")]
	[Address(RVA = "0x3E77CA0", Offset = "0x3E77CA0", VA = "0x3E77CA0")]
	public static string GetPropertyNodeText(XmlDocument xmlDocument, Type type, PropertyInfo property, string nodeType, string defaultText = "")
	{
		return null;
	}

	[Token(Token = "0x6002F88")]
	[Address(RVA = "0x3E77E70", Offset = "0x3E77E70", VA = "0x3E77E70")]
	public static string GetFieldNodeText(XmlDocument xmlDocument, Type type, FieldInfo field, string nodeType, string defaultText = "")
	{
		return null;
	}

	[Token(Token = "0x6002F89")]
	[Address(RVA = "0x3E77170", Offset = "0x3E77170", VA = "0x3E77170")]
	private static bool TryGetInnerText(XmlNode node, string nodeType, out string innerText)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F8A")]
	[Address(RVA = "0x3E78040", Offset = "0x3E78040", VA = "0x3E78040")]
	private static bool TrySelectSingleNode(this XmlNode node, string xpath, out XmlNode xNode)
	{
		return default(bool);
	}
}
