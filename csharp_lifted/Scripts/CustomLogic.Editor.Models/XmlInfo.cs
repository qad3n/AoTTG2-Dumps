// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.Editor.Models.XmlInfo
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/Editor/Models/XmlInfo.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Xml;
using Il2CppDummyDll;

namespace CustomLogic.Editor.Models;

[Token(Token = "0x2000674")]
internal class XmlInfo
{
	[Token(Token = "0x17000ADD")]
	public string Summary
	{
		[Token(Token = "0x6003E07")]
		[Address(RVA = "0x5A97FA0", Offset = "0x5A96FA0", VA = "0x5A97FA0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$get_Summary): clean
			return this._Summary_k__BackingField;
		}
		[Token(Token = "0x6003E08")]
		[Address(RVA = "0x5A97FB0", Offset = "0x5A96FB0", VA = "0x5A97FB0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$set_Summary): clean
			this._Summary_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000ADE")]
	public string Remarks
	{
		[Token(Token = "0x6003E09")]
		[Address(RVA = "0x5A97FC0", Offset = "0x5A96FC0", VA = "0x5A97FC0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$get_Remarks): clean
			return this._Remarks_k__BackingField;
		}
		[Token(Token = "0x6003E0A")]
		[Address(RVA = "0x5A97FD0", Offset = "0x5A96FD0", VA = "0x5A97FD0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$set_Remarks): clean
			this._Remarks_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000ADF")]
	public string Code
	{
		[Token(Token = "0x6003E0B")]
		[Address(RVA = "0x5A97FE0", Offset = "0x5A96FE0", VA = "0x5A97FE0")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$get_Code): clean
			return this._Code_k__BackingField;
		}
		[Token(Token = "0x6003E0C")]
		[Address(RVA = "0x5A97FF0", Offset = "0x5A96FF0", VA = "0x5A97FF0")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$set_Code): clean
			this._Code_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000AE0")]
	public string Returns
	{
		[Token(Token = "0x6003E0D")]
		[Address(RVA = "0x5A98000", Offset = "0x5A97000", VA = "0x5A98000")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$get_Returns): clean
			return this._Returns_k__BackingField;
		}
		[Token(Token = "0x6003E0E")]
		[Address(RVA = "0x5A98010", Offset = "0x5A97010", VA = "0x5A98010")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$set_Returns): clean
			this._Returns_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x6003E0F")]
	[Address(RVA = "0x5A98020", Offset = "0x5A97020", VA = "0x5A98020")]
	public static XmlInfo FromTypeXml(XmlDocument xmlDocument, Type type)
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$FromTypeXml): clean
		XmlInfo __this;
		String pSVar1;

		__this = new XmlInfo();
		pSVar1 = XmlDocumentUtils.GetTypeNodeText(xmlDocument, type, "summary", "");
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._Summary_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetTypeNodeText(xmlDocument, type, "remarks", "");
		__this._Remarks_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetTypeNodeText(xmlDocument, type, "code", "");
		__this._Code_k__BackingField = pSVar1;
		return __this;
	}

	[Token(Token = "0x6003E10")]
	[Address(RVA = "0x5A98170", Offset = "0x5A97170", VA = "0x5A98170")]
	public static XmlInfo FromConstructorXml(XmlDocument xmlDocument, Type type, ConstructorInfo ctorInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$FromConstructorXml): clean
		XmlInfo __this;
		String pSVar1;

		__this = new XmlInfo();
		pSVar1 = XmlDocumentUtils.GetConstructorNodeText(xmlDocument, type, ctorInfo, "summary", "");
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._Summary_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetConstructorNodeText(xmlDocument, type, ctorInfo, "remarks", "");
		__this._Remarks_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetConstructorNodeText(xmlDocument, type, ctorInfo, "code", "");
		__this._Code_k__BackingField = pSVar1;
		return __this;
	}

	[Token(Token = "0x6003E11")]
	[Address(RVA = "0x5A982C0", Offset = "0x5A972C0", VA = "0x5A982C0")]
	public static XmlInfo FromPropertyXml(XmlDocument xmlDocument, Type type, PropertyInfo propertyInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$FromPropertyXml): clean
		XmlInfo __this;
		String pSVar1;

		__this = new XmlInfo();
		pSVar1 = XmlDocumentUtils.GetPropertyNodeText(xmlDocument, type, propertyInfo, "summary", "");
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._Summary_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetPropertyNodeText(xmlDocument, type, propertyInfo, "remarks", "");
		__this._Remarks_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetPropertyNodeText(xmlDocument, type, propertyInfo, "code", "");
		__this._Code_k__BackingField = pSVar1;
		return __this;
	}

	[Token(Token = "0x6003E12")]
	[Address(RVA = "0x5A98410", Offset = "0x5A97410", VA = "0x5A98410")]
	public static XmlInfo FromFieldXml(XmlDocument xmlDocument, Type type, FieldInfo fieldInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$FromFieldXml): clean
		XmlInfo __this;
		String pSVar1;

		__this = new XmlInfo();
		pSVar1 = XmlDocumentUtils.GetFieldNodeText(xmlDocument, type, fieldInfo, "summary", "");
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._Summary_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetFieldNodeText(xmlDocument, type, fieldInfo, "remarks", "");
		__this._Remarks_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetFieldNodeText(xmlDocument, type, fieldInfo, "code", "");
		__this._Code_k__BackingField = pSVar1;
		return __this;
	}

	[Token(Token = "0x6003E13")]
	[Address(RVA = "0x5A98560", Offset = "0x5A97560", VA = "0x5A98560")]
	public static XmlInfo FromMethodXml(XmlDocument xmlDocument, Type type, MethodInfo methodInfo)
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$FromMethodXml): clean
		XmlInfo __this;
		String pSVar1;

		__this = new XmlInfo();
		pSVar1 = XmlDocumentUtils.GetMethodNodeText(xmlDocument, type, methodInfo, "summary", "");
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._Summary_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetMethodNodeText(xmlDocument, type, methodInfo, "remarks", "");
		__this._Remarks_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetMethodNodeText(xmlDocument, type, methodInfo, "code", "");
		__this._Code_k__BackingField = pSVar1;
		pSVar1 = XmlDocumentUtils.GetMethodNodeText(xmlDocument, type, methodInfo, "returns", "");
		__this._Returns_k__BackingField = pSVar1;
		return __this;
	}

	[Token(Token = "0x6003E14")]
	[Address(RVA = "0x5A98160", Offset = "0x5A97160", VA = "0x5A98160")]
	public XmlInfo()
	{
		// Lifted from source/cpp/CustomLogic/Editor/Models/XmlInfo.c (CustomLogic.Editor.Models.XmlInfo$$.ctor): clean
		base();
		return;
	}
}
