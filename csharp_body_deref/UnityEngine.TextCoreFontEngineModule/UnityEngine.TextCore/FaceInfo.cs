using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.TextCore;

[Serializable]
[Token(Token = "0x2000002")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct FaceInfo
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("faceIndex")]
	private int m_FaceIndex;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("familyName")]
	private string m_FamilyName;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("styleName")]
	private string m_StyleName;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("pointSize")]
	private int m_PointSize;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("scale")]
	[SerializeField]
	private float m_Scale;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("unitsPerEM")]
	[SerializeField]
	private int m_UnitsPerEM;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x24")]
	[UnityEngine.Bindings.NativeName("lineHeight")]
	[SerializeField]
	private float m_LineHeight;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("ascentLine")]
	[SerializeField]
	private float m_AscentLine;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x2C")]
	[UnityEngine.Bindings.NativeName("capLine")]
	[SerializeField]
	private float m_CapLine;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("meanLine")]
	private float m_MeanLine;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x34")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("baseline")]
	private float m_Baseline;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x38")]
	[UnityEngine.Bindings.NativeName("descentLine")]
	[SerializeField]
	private float m_DescentLine;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x3C")]
	[UnityEngine.Bindings.NativeName("superscriptOffset")]
	[SerializeField]
	private float m_SuperscriptOffset;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("superscriptSize")]
	private float m_SuperscriptSize;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x44")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("subscriptOffset")]
	private float m_SubscriptOffset;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x48")]
	[UnityEngine.Bindings.NativeName("subscriptSize")]
	[SerializeField]
	private float m_SubscriptSize;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("underlineOffset")]
	private float m_UnderlineOffset;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("underlineThickness")]
	private float m_UnderlineThickness;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x54")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("strikethroughOffset")]
	private float m_StrikethroughOffset;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("strikethroughThickness")]
	private float m_StrikethroughThickness;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x5C")]
	[SerializeField]
	[UnityEngine.Bindings.NativeName("tabWidth")]
	private float m_TabWidth;

	[Token(Token = "0x17000001")]
	internal int faceIndex
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4B7B7C0", Offset = "0x4B7B7C0", VA = "0x4B7B7C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public string familyName
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4B7B7D0", Offset = "0x4B7B7D0", VA = "0x4B7B7D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x4B7B7E0", Offset = "0x4B7B7E0", VA = "0x4B7B7E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public string styleName
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4B7B7F0", Offset = "0x4B7B7F0", VA = "0x4B7B7F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x4B7B800", Offset = "0x4B7B800", VA = "0x4B7B800")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public int pointSize
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4B7B810", Offset = "0x4B7B810", VA = "0x4B7B810")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4B7B820", Offset = "0x4B7B820", VA = "0x4B7B820")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	public float scale
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4B7B830", Offset = "0x4B7B830", VA = "0x4B7B830")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4B7B840", Offset = "0x4B7B840", VA = "0x4B7B840")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public float lineHeight
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4B7B850", Offset = "0x4B7B850", VA = "0x4B7B850")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4B7B860", Offset = "0x4B7B860", VA = "0x4B7B860")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public float ascentLine
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4B7B870", Offset = "0x4B7B870", VA = "0x4B7B870")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4B7B880", Offset = "0x4B7B880", VA = "0x4B7B880")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float capLine
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4B7B890", Offset = "0x4B7B890", VA = "0x4B7B890")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4B7B8A0", Offset = "0x4B7B8A0", VA = "0x4B7B8A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public float meanLine
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4B7B8B0", Offset = "0x4B7B8B0", VA = "0x4B7B8B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4B7B8C0", Offset = "0x4B7B8C0", VA = "0x4B7B8C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public float baseline
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4B7B8D0", Offset = "0x4B7B8D0", VA = "0x4B7B8D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4B7B8E0", Offset = "0x4B7B8E0", VA = "0x4B7B8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public float descentLine
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4B7B8F0", Offset = "0x4B7B8F0", VA = "0x4B7B8F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4B7B900", Offset = "0x4B7B900", VA = "0x4B7B900")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public float superscriptOffset
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4B7B910", Offset = "0x4B7B910", VA = "0x4B7B910")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4B7B920", Offset = "0x4B7B920", VA = "0x4B7B920")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public float superscriptSize
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4B7B930", Offset = "0x4B7B930", VA = "0x4B7B930")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4B7B940", Offset = "0x4B7B940", VA = "0x4B7B940")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public float subscriptOffset
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4B7B950", Offset = "0x4B7B950", VA = "0x4B7B950")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x4B7B960", Offset = "0x4B7B960", VA = "0x4B7B960")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public float subscriptSize
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x4B7B970", Offset = "0x4B7B970", VA = "0x4B7B970")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x4B7B980", Offset = "0x4B7B980", VA = "0x4B7B980")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float underlineOffset
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4B7B990", Offset = "0x4B7B990", VA = "0x4B7B990")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x4B7B9A0", Offset = "0x4B7B9A0", VA = "0x4B7B9A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public float underlineThickness
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4B7B9B0", Offset = "0x4B7B9B0", VA = "0x4B7B9B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x4B7B9C0", Offset = "0x4B7B9C0", VA = "0x4B7B9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public float strikethroughOffset
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x4B7B9D0", Offset = "0x4B7B9D0", VA = "0x4B7B9D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4B7B9E0", Offset = "0x4B7B9E0", VA = "0x4B7B9E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public float strikethroughThickness
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x4B7B9F0", Offset = "0x4B7B9F0", VA = "0x4B7B9F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public float tabWidth
	{
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x4B7BA00", Offset = "0x4B7BA00", VA = "0x4B7BA00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4B7BA10", Offset = "0x4B7BA10", VA = "0x4B7BA10")]
		set
		{
		}
	}
}
